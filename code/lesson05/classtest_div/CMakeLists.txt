# CMakeLists.txt
# 
# CMakeのバージョンを指定
cmake_minimum_required(VERSION 3.10)

# set the project name
project(classtest CXX)

add_definitions(-std=c++11)

# add the executable
add_executable(classtest_div classtest_div.cpp Rectangle.cpp)
