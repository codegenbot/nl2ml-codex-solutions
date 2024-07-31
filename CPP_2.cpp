#include <iostream>
#include <cmath>
#include <cassert>

double truncate_number(double number) {
    return number - std::floor(number);
}

assert(std::abs(truncate_number(123.456) - 0.456) < 1e-4);

return 0;