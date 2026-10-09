cmake_minimum_required(3.28.3)

project(stock product family mart mulyos)

add_library(include include.hpp)
add_library(classes classes.hpp)
add_library(functions functions.hpp)

add_executable(runner runner.cpp)

target_link_libraries()