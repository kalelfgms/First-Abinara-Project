#pragma once
#include "include.hpp"
#include "classes.hpp"

inline bool running = true; // check if program is running, exit handling
//inline array(?) inventory
inline vector<product> inventory = {}; 
enum productInfo {
    Name, Type, Subtype, Price, Stock, Properties
};
// vector cuz size isnt fixed, but itll turn item into product (removes properties)
// maybe save properties in a properties vector inside parent class 