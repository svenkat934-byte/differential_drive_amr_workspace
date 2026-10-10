from setuptools import find_packages
from setuptools import setup

setup(
    name='diff_amr_navigation',
    version='0.0.0',
    packages=find_packages(
        include=('diff_amr_navigation', 'diff_amr_navigation.*')),
)
