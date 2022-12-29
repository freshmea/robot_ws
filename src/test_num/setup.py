from setuptools import setup

package_name = 'test_num'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='aa',
    maintainer_email='freshmea@naver.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'mss = test_num.test_service_ser:main',
            'mss2 = test_num.test_service_ser2:main',
            'msc = test_num.test_service_cli:main',
            'msc2 = test_num.test_service_cli2:main'
        ],
    },
)
