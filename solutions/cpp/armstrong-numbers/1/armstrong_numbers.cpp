#include "armstrong_numbers.h"

namespace armstrong_numbers {

    bool is_armstrong_number(size_t num)
    {
        size_t tot = 0;
        std::string str_num = std::to_string(num);
        for (auto elmnt : str_num)
        {
            size_t digit = elmnt - '0'; size_t sum = 1;
            for (size_t i = 0; i < str_num.length(); i++)
                sum *= digit;
            tot += sum;
        }

        return (num == tot);
    }

}  // namespace armstrong_numbers
