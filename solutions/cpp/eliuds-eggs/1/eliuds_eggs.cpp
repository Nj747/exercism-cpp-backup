#include "eliuds_eggs.h"

namespace chicken_coop {
    int positions_to_quantity(int decimal)
    {
        int sum = 0;
        do {
            sum += decimal % 2;
            decimal /= 2;
        } while (decimal > 0);

        return sum;
    }

}  // namespace chicken_coop
