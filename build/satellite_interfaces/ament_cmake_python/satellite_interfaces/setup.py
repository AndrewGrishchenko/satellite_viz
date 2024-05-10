from setuptools import find_packages
from setuptools import setup

setup(
    name='satellite_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('satellite_interfaces', 'satellite_interfaces.*')),
)
