# CMakeLists.txt
# 
# CMakeのバージョンを指定
cmake_minimum_required(VERSION 3.10)

# set the project name
project(CMakeSample2Project C)

# add the executable
add_executable(cmakesample2 cmakesample2.c func1.c)