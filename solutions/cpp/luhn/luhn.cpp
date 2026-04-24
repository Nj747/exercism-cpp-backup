#include "luhn.h"

namespace luhn {
    int sum_of_digits(std::string str){
        reverse(str.begin(), str.end());
        int num = 0, sum = 0; 
        for (size_t i = 0; i < str.size(); i++){
            num = std::stoi(str.substr(i, 1));
            if (i % 2 == 1){
                sum += (num*2 > 9) ? (num*2 - 9) : (num*2);
            } else {
                sum += num;
            }
        }

        return sum;
    } // sum_of_digits

    bool valid(std::string str){
        str.erase(remove_if(str.begin(), str.end(), isspace), str.end());
        
        try {
            if (str.size() <= 1)
                throw std::out_of_range("size is out of range");
            for (auto c : str){
                if ((c > 57) || (c < 48)){
                    throw std::domain_error("string content is not a number");
                }
            }
            
            int sum = sum_of_digits(str);
            bool result = (sum % 10 == 0) ? true : false;
            return result;
            
        } catch (...) {
            return false;
        }
    } // valid
}  // namespace luhn
