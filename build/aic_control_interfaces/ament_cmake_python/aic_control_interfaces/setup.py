from setuptools import find_packages
from setuptools import setup

setup(
    name='aic_control_interfaces',
    version='0.0.1',
    packages=find_packages(
        include=('aic_control_interfaces', 'aic_control_interfaces.*')),
)
