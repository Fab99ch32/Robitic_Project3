from setuptools import find_packages
from setuptools import setup

setup(
    name='ro45_portalrobot_interfaces',
    version='1.0.0',
    packages=find_packages(
        include=('ro45_portalrobot_interfaces', 'ro45_portalrobot_interfaces.*')),
)
