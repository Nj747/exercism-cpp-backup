#pragma once

#include <string>
#include <unordered_set>
#include <vector>

namespace allergies {
    class allergy_test {
    public:
        allergy_test(unsigned int score);
        bool is_allergic_to(const std::string& query) const;
        std::unordered_set<std::string> get_allergies() const;

    private:
        std::unordered_set<std::string> active_allergies;
    };
}  // namespace allergies
