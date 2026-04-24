#include "hamming.h"

namespace hamming {
    int compute(std::string cad1, std::string cad2){
        if (cad1.size() != cad2.size())
            throw std::domain_error("");
        
        int count = 0;
        for (size_t i = 0; i < cad1.size(); i++){
            if (cad1.substr(i,1) != cad2.substr(i,1))
                count++;
        }
        return count;
    }
    
}  // namespace hamming
