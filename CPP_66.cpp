#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int digitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += c - 'A' + 1; 
        }
    }
    return sum;

}

assert(digitSum("You arE Very Smart") == 327);