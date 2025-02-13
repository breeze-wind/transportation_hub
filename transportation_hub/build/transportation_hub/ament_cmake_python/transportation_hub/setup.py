from setuptools import find_packages
from setuptools import setup

setup(
    name='transportation_hub',
    version='0.0.0',
    packages=find_packages(
        include=('transportation_hub', 'transportation_hub.*')),
)
