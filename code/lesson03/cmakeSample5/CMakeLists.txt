# CMakeLists.txt
# 
# CMakeのバージョンを指定
cmake_minimum_required(VERSION 3.10)

# set the project name
project(CMakeSample5Project C)

# build shared library
add_library(calcSquareShared SHARED func1.c) 

# add the executable
add_executable(cmakesample5 cmakesample2.c)

# link library
target_link_libraries(cmakesample5 calcSquareShared)