cmake_minimum_required(VERSION 3.28.3)

project(store_inventory_system)

add_library(include include.hpp)
add_library(classes include/classes.hpp)
add_library(includes include/include.hpp)
add_library(functions include/functions/functions.hpp)
add_library(interface include/functions/interface.hpp)

add_executable(runner src/runner.cpp)

target_link_libraries(runner classes interface)
target_link_libraries(classes includes functions)
target_link_libraries(functions includes)
target_link_libraries(interface classes)