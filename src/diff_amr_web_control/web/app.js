
// ======================================================
// CONNECT TO ROS 2 THROUGH ROSBRIDGE
// ======================================================

const ros = new ROSLIB.Ros({

    url: "ws://" + window.location.hostname + ":9090"

});


const statusElement =
    document.getElementById("status");


let connected = false;


// ======================================================
// ROS CONNECTION EVENTS
// ======================================================

ros.on("connection", function () {

    connected = true;

    statusElement.textContent =
        "Connected to ROS 2";

    statusElement.style.color =
        "#4ade80";

});


ros.on("error", function (error) {

    console.error(
        "ROS connection error:",
        error
    );

    statusElement.textContent =
        "ROS connection error";

    statusElement.style.color =
        "#f87171";

});


ros.on("close", function () {

    connected = false;

    linear = 0.0;

    angular = 0.0;

    resetJoystick();

    statusElement.textContent =
        "Disconnected from ROS 2";

    statusElement.style.color =
        "#f87171";

});


// ======================================================
// VELOCITY PUBLISHER
// ======================================================

const cmdVel = new ROSLIB.Topic({

    ros: ros,

    name: "/web/cmd_vel_raw",

    messageType:
        "geometry_msgs/msg/TwistStamped"

});


// ======================================================
// VELOCITY VARIABLES
// ======================================================

let linear = 0.0;

let angular = 0.0;


// ======================================================
// SPEED SETTINGS
// ======================================================

const linearSlider =
    document.getElementById("linearSpeed");

const angularSlider =
    document.getElementById("angularSpeed");


const linearValue =
    document.getElementById("linearValue");

const angularValue =
    document.getElementById("angularValue");


linearSlider.addEventListener(
    "input",
    function () {

        linearValue.textContent =
            Number(this.value).toFixed(2);

    }
);


angularSlider.addEventListener(
    "input",
    function () {

        angularValue.textContent =
            Number(this.value).toFixed(2);

    }
);


// ======================================================
// CURRENT VELOCITY DISPLAY
// ======================================================

const currentLinear =
    document.getElementById("currentLinear");

const currentAngular =
    document.getElementById("currentAngular");


function updateVelocityDisplay() {

    currentLinear.textContent =
        linear.toFixed(2);

    currentAngular.textContent =
        angular.toFixed(2);

}


// ======================================================
// PUBLISH VELOCITY
// ======================================================



   
function publishVelocity() {

    if (!connected) {
        console.log("ROS not connected");
        return;
    }

    const message = new ROSLIB.Message({

        header: {
            stamp: {
                sec: 0,
                nanosec: 0
            },
            frame_id: "base_link"
        },

        twist: {

            linear: {
                x: linear,
                y: 0.0,
                z: 0.0
            },

            angular: {
                x: 0.0,
                y: 0.0,
                z: angular
            }

        }

    });

    console.log(
        "Publishing TwistStamped:",
        linear,
        angular
    );

    cmdVel.publish(message);

     updateVelocityDisplay();
}



// ======================================================
// STOP ROBOT
// ======================================================

function stopRobot() {

    linear = 0.0;

    angular = 0.0;


    publishVelocity();

}


// ======================================================
// JOYSTICK
// ======================================================

const joystick =
    document.getElementById("joystick");

const joystickKnob =
    document.getElementById("joystickKnob");


let joystickActive = false;

let joystickPointerId = null;


// Joystick dimensions

const joystickSize = 260;

const knobSize = 90;


// Maximum knob movement from center

const maxDistance =
    (joystickSize - knobSize) / 2;


// ======================================================
// HANDLE JOYSTICK MOVEMENT
// ======================================================

function moveJoystick(event) {

    if (!joystickActive) {
        return;
    }


    if (event.pointerId !== joystickPointerId) {
        return;
    }


    const rect =
        joystick.getBoundingClientRect();


    const centerX =
        rect.left + rect.width / 2;

    const centerY =
        rect.top + rect.height / 2;


    let x =
        event.clientX - centerX;

    let y =
        event.clientY - centerY;


    // Limit joystick movement

    const distance =
        Math.sqrt(
            x * x +
            y * y
        );


    if (distance > maxDistance) {

        const scale =
            maxDistance / distance;

        x *= scale;

        y *= scale;

    }


    // Move visual knob

    joystickKnob.style.transform =
        `translate(
            calc(-50% + ${x}px),
            calc(-50% + ${y}px)
        )`;


    // Normalize to -1 ... +1

    const normalizedX =
        x / maxDistance;

    const normalizedY =
        y / maxDistance;


    // Dead zone

    const deadZone = 0.10;


    let controlX =
        normalizedX;

    let controlY =
        normalizedY;


    if (Math.abs(controlX) < deadZone) {
        controlX = 0;
    }


    if (Math.abs(controlY) < deadZone) {
        controlY = 0;
    }


    // ================================================
    // CONVERT JOYSTICK TO ROBOT VELOCITY
    // ================================================

    const maxLinearSpeed =
        Number(linearSlider.value);

    const maxAngularSpeed =
        Number(angularSlider.value);


    /*
        Screen Y:

        Up   = negative Y
        Down = positive Y

        Robot:

        Forward = positive linear.x
        Reverse = negative linear.x
    */

    linear =
        -controlY * maxLinearSpeed;


    /*
        Screen X:

        Right = positive X
        Left  = negative X

        Robot convention:

        Left  = positive angular.z
        Right = negative angular.z
    */

    angular =
        -controlX * maxAngularSpeed;


    publishVelocity();

}


// ======================================================
// START JOYSTICK
// ======================================================

joystick.addEventListener(
    "pointerdown",
    function (event) {

        event.preventDefault();


        joystickActive = true;

        joystickPointerId =
            event.pointerId;


        joystick.setPointerCapture(
            event.pointerId
        );


        moveJoystick(event);

    }
);


// ======================================================
// CONTINUE JOYSTICK
// ======================================================

joystick.addEventListener(
    "pointermove",
    function (event) {

        event.preventDefault();

        moveJoystick(event);

    }
);


// ======================================================
// RELEASE JOYSTICK
// ======================================================

function releaseJoystick(event) {

    if (
        joystickPointerId !== null &&
        event.pointerId !== joystickPointerId
    ) {
        return;
    }


    joystickActive = false;

    joystickPointerId = null;


    resetJoystick();

}


joystick.addEventListener(
    "pointerup",
    releaseJoystick
);


joystick.addEventListener(
    "pointercancel",
    releaseJoystick
);


joystick.addEventListener(
    "lostpointercapture",
    function () {

        joystickActive = false;

        joystickPointerId = null;

        resetJoystick();

    }
);


// ======================================================
// RESET JOYSTICK
// ======================================================

function resetJoystick() {

    joystickKnob.style.transform =
        "translate(-50%, -50%)";


    linear = 0.0;

    angular = 0.0;


    publishVelocity();

}


// ======================================================
// STOP BUTTON
// ======================================================

document
    .getElementById("stop")
    .addEventListener(
        "click",
        function () {

            joystickActive = false;

            joystickPointerId = null;

            stopRobot();

            joystickKnob.style.transform =
                "translate(-50%, -50%)";

        }
    );


// ======================================================
// CONTINUOUS VELOCITY PUBLISHING
// ======================================================

setInterval(
    function () {

        if (
            connected &&
            joystickActive
        ) {

            publishVelocity();

        }

    },
    100
);


// ======================================================
// LIVE CAMERA
// ======================================================

const cameraFeed =
    document.getElementById("cameraFeed");

const cameraStatus =
    document.getElementById("cameraStatus");


const cameraTopic =
    new ROSLIB.Topic({

        ros: ros,

        name:
            "/camera/image_raw/compressed",

        messageType:
            "sensor_msgs/msg/CompressedImage",

        throttle_rate: 100,

        queue_length: 1

    });


cameraTopic.subscribe(
    function (message) {

        if (!message.data) {
            return;
        }


        cameraFeed.src =
            "data:image/jpeg;base64," +
            message.data;


        cameraStatus.textContent =
            "Camera stream receiving";

        cameraStatus.style.color =
            "#4ade80";

    }
);


cameraFeed.onerror =
    function () {

        cameraStatus.textContent =
            "Unable to decode camera image";

        cameraStatus.style.color =
            "#f87171";

    };


// ======================================================
// LIVE 2D LIDAR
// ======================================================

const lidarCanvas =
    document.getElementById("lidarCanvas");

const lidarCtx =
    lidarCanvas.getContext("2d");


const lidarStatus =
    document.getElementById("lidarStatus");

const lidarRange =
    document.getElementById("lidarRange");


const lidarWidth =
    lidarCanvas.width;

const lidarHeight =
    lidarCanvas.height;


const centerX =
    lidarWidth / 2;

const centerY =
    lidarHeight / 2;


// Visualization range

const displayRange = 5.0;


// Pixels per meter

const scale =
    lidarWidth /
    (2 * displayRange);


// ======================================================
// LIDAR TOPIC
// ======================================================

const scanTopic =
    new ROSLIB.Topic({

        ros: ros,

        name: "/scan",

        messageType:
            "sensor_msgs/msg/LaserScan",

        throttle_rate: 100,

        queue_length: 1

    });


// ======================================================
// DRAW LIDAR BACKGROUND
// ======================================================

function drawLidarBackground() {

    lidarCtx.clearRect(
        0,
        0,
        lidarWidth,
        lidarHeight
    );


    lidarCtx.fillStyle =
        "#020617";


    lidarCtx.fillRect(
        0,
        0,
        lidarWidth,
        lidarHeight
    );


    // Range circles

    for (
        let r = 1;
        r <= displayRange;
        r++
    ) {

        const radius =
            r * scale;


        lidarCtx.beginPath();


        lidarCtx.strokeStyle =
            "#334155";

        lidarCtx.lineWidth = 1;


        lidarCtx.arc(
            centerX,
            centerY,
            radius,
            0,
            2 * Math.PI
        );


        lidarCtx.stroke();


        lidarCtx.fillStyle =
            "#94a3b8";

        lidarCtx.font =
            "12px Arial";


        lidarCtx.fillText(
            r + "m",
            centerX + 5,
            centerY - radius + 15
        );

    }


    // Axes

    lidarCtx.strokeStyle =
        "#475569";


    lidarCtx.beginPath();


    lidarCtx.moveTo(
        0,
        centerY
    );

    lidarCtx.lineTo(
        lidarWidth,
        centerY
    );


    lidarCtx.moveTo(
        centerX,
        0
    );

    lidarCtx.lineTo(
        centerX,
        lidarHeight
    );


    lidarCtx.stroke();


    // Robot

    lidarCtx.fillStyle =
        "#38bdf8";


    lidarCtx.beginPath();


    lidarCtx.arc(
        centerX,
        centerY,
        7,
        0,
        2 * Math.PI
    );


    lidarCtx.fill();


    // Robot heading

    lidarCtx.strokeStyle =
        "#38bdf8";

    lidarCtx.lineWidth = 3;


    lidarCtx.beginPath();


    lidarCtx.moveTo(
        centerX,
        centerY
    );


    lidarCtx.lineTo(
        centerX,
        centerY - 25
    );


    lidarCtx.stroke();

}


// ======================================================
// PROCESS LIDAR
// ======================================================

scanTopic.subscribe(
    function (scan) {

        drawLidarBackground();


        const ranges =
            scan.ranges;


        const angleMin =
            scan.angle_min;

        const angleIncrement =
            scan.angle_increment;


        const rangeMin =
            scan.range_min;

        const rangeMax =
            scan.range_max;


        let validPoints = 0;


        for (
            let i = 0;
            i < ranges.length;
            i++
        ) {

            const distance =
                ranges[i];


            if (!Number.isFinite(distance)) {
                continue;
            }


            if (
                distance < rangeMin ||
                distance > rangeMax
            ) {
                continue;
            }


            if (
                distance > displayRange
            ) {
                continue;
            }


            const angle =
                angleMin +
                i * angleIncrement;


            // LaserScan:
            // X forward
            // Y left

            const x =
                distance *
                Math.cos(angle);

            const y =
                distance *
                Math.sin(angle);


            // Canvas Y is inverted

            const canvasX =
                centerX +
                x * scale;

            const canvasY =
                centerY -
                y * scale;


            lidarCtx.fillStyle =
                "#4ade80";


            lidarCtx.beginPath();


            lidarCtx.arc(
                canvasX,
                canvasY,
                2,
                0,
                2 * Math.PI
            );


            lidarCtx.fill();


            validPoints++;

        }


        lidarStatus.textContent =
            "LiDAR connected | Valid points: " +
            validPoints;


        lidarStatus.style.color =
            "#4ade80";


        lidarRange.textContent =
            "Sensor range: " +
            rangeMin.toFixed(2) +
            " m - " +
            rangeMax.toFixed(2) +
            " m | Display: " +
            displayRange.toFixed(1) +
            " m";

    }
);


// ======================================================
// INITIAL DISPLAY
// ======================================================

drawLidarBackground();

updateVelocityDisplay();
