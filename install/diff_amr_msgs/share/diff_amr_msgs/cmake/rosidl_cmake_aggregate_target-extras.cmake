# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target diff_amr_msgs::diff_amr_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${diff_amr_msgs_TARGETS}.
if(diff_amr_msgs_TARGETS AND NOT TARGET diff_amr_msgs::diff_amr_msgs)
  add_library(diff_amr_msgs::diff_amr_msgs INTERFACE IMPORTED)
  set_target_properties(diff_amr_msgs::diff_amr_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${diff_amr_msgs_TARGETS}")
endif()
