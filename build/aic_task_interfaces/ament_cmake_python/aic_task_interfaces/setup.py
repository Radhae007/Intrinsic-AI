from setuptools import find_packages
from setuptools import setup

setup(
    name='aic_task_interfaces',
    version='0.0.1',
    packages=find_packages(
        include=('aic_task_interfaces', 'aic_task_interfaces.*')),
)
