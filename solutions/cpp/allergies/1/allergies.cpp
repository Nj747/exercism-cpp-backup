#include "allergies.h"

namespace allergies {
    allergy_test::allergy_test(unsigned int score)
    {
        std::vector<std::pair<unsigned int, std::string>> chart
        {
            {1, "eggs"}, 
            {2, "peanuts"}, 
            {4, "shellfish"}, 
            {8, "strawberries"}, 
            {16, "tomatoes"}, 
            {32, "chocolate"}, 
            {64, "pollen"}, 
            {128, "cats"}
        };

        for (const auto& item : chart) {
            if (score & item.first) {
                active_allergies.emplace(item.second);
            }
        }
    }

    bool allergy_test::is_allergic_to(const std::string& query) const {
        return active_allergies.find(query) != active_allergies.end();
    }

    std::unordered_set<std::string> allergy_test::get_allergies() const {
        return active_allergies;
    }
} // namespace allergies
