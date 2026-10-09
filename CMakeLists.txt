cmake_minimum_required(VERSION 3.28)
 
project(store_inventory_system LANGUAGES CXX)
 
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
 
add_executable(runner src/runner.cpp)