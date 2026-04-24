#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

namespace resistor_color {

    const std::vector<std::string> colorsVec 
    {
        "black", "brown", "red", "orange", 
        "yellow", "green", "blue", "violet", 
        "grey","white"  
    };

    int color_code(const std::string color);

    const std::vector<std::string> colors(); 

}  // namespace resistor_color
