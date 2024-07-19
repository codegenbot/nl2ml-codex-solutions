#include <cassert>
#include <cmath>

double truncate_number(double number) {
    return number - floor(number);
}

int main() {
    assert(fabs(truncate_number(123.456) - 0.456) < 1e-4);
    // Additional test cases can be added here
    return 0;
}