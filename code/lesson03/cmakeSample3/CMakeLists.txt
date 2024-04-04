# CMakeLists.txt
# 
# CMakeのバージョンを指定
cmake_minimum_required(VERSION 3.10)

# set the project name
project(CMakeSample3Project CXX)

# find library
find_package(Eigen3 REQUIRED)

# add the executable
add_executable(cmakesample3 cmakesample3.cpp func2.cpp)

# link library
target_link_libraries(cmakesample3 Eigen3::Eigen)