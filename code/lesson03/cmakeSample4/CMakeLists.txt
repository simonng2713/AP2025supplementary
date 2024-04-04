# CMakeLists.txt
# 
# CMakeのバージョンを指定
cmake_minimum_required(VERSION 3.10)

# set the project name
project(CMakeSample4Project C)

# build static library
add_library(calcSquareStatic STATIC func1.c) 

# add the executable
add_executable(cmakesample4 cmakesample2.c)

# link library
target_link_libraries(cmakesample4 calcSquareStatic)