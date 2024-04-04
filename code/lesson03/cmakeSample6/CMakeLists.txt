# CMakeLists.txt
# 
# CMakeのバージョンを指定
cmake_minimum_required(VERSION 3.10)

# set the project name
project(CMakeSample6Project CXX)

# find library
find_package(Eigen3 REQUIRED)

# build shared library
add_library(calcSquareShared SHARED func2.cpp) 
# link to built shared library
target_link_libraries(calcSquareShared Eigen3::Eigen)

# add the executable
add_executable(cmakesample6 cmakesample3.cpp)
# link library
target_link_libraries(cmakesample6 calcSquareShared)