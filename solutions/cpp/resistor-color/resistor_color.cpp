#include "resistor_color.h"

namespace resistor_color {

    int color_code(const std::string color)
    {
        int number = 0;
        for (size_t i = 0; i < colorsVec.size(); ++i)
        {
            if (colorsVec[i] == color) {
                number = i;
                break;
            }
        }

        return number;
    }

    const std::vector<std::string> colors() { return colorsVec; } 

}  // namespace resistor_color
