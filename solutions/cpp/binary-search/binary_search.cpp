#include "binary_search.h"

namespace binary_search {

    size_t find(std::vector<int> data, int target){
        size_t l = 0, r = data.size() - 1;

        if (data.empty() || target < data[0] || target > data[r]){
            throw std::domain_error("");
        }    
            
         while (l <= r) {
            size_t m = l + (r - l) / 2;
            if (data[m] == target)
                return m;
     
            if (data[m] < target)
                l = m + 1;
     
            else
                r = m - 1;
        }
        throw std::domain_error("");
    }
}  // namespace binary_search
