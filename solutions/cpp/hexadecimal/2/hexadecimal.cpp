#include "hexadecimal.h"

namespace hexadecimal {
    int convert(std::string decimal) {
        try{
            int N = decimal.length(), result = 0;
            int number, i = 0;
            for (const auto c : decimal) {
                if (c > 96 && c < 103){
                    number = 9 + c % 8;
                } else {
                    number = std::stoi(decimal.substr(i,1));
                }
                result += number * pow(16, N - i - 1);
                i++;
            }
            return result;
            
        } catch (...) {
            return 0;
        }
    }
}  // namespace hexadecimal
