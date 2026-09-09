from setuptools import find_packages
from setuptools import setup

setup(
    name='aic_engine_interfaces',
    version='0.0.1',
    packages=find_packages(
        include=('aic_engine_interfaces', 'aic_engine_interfaces.*')),
)
