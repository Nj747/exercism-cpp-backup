#include "hexadecimal.h"

namespace hexadecimal {
    std::map<std::string, std::string> hexa{
    {"a", "10"},
    {"b", "11"},
    {"c", "12"},
    {"d", "13"},
    {"e", "14"},
    {"f", "15"},
};

int convert(std::string decimal) {
        try{
            int N = decimal.length();
            int result = 0;
            for (int i = 0; i < N; i++) {
                std::string number = decimal.substr(i, 1);
                for(const auto& [letter, value] : hexa){
                    if (number == letter){
                        number = value;
                        std::cout << "letter " << letter << "-" << value << "\n";
                        break;
                    }
                }
                result += std::stoi(number) * pow(16, N - i - 1);
            }
            return result;
            
        } catch (...){
            return 0;
        }
    }
}  // namespace hexadecimal
