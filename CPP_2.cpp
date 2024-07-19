#include <iostream>
#include <cassert>
#include <cmath>

double truncate_number(double number) {
    return number - floor(number);
}

// int main() {
//     assert(std::abs(truncate_number(123.456) - 0.456) < 1e-4);
    
// Comment out the existing main function

int main(){
    assert(std::abs(truncate_number(123.456) - 0.456) < 1e-4);

    // Add more test cases here...
    
    // Add additional assert for more test cases
    assert(std::abs(truncate_number(78.901) - 0.901) < 1e-4);
    assert(std::abs(truncate_number(0.123) - 0.123) < 1e-4);
    
    return 0;
}