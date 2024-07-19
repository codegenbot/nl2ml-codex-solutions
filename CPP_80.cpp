#include <iostream>
#include <string>
#include <cassert>

bool is_happy(const std::string s) {
    if (s.length() < 3) {
        return false;
    }
    
    for (int i = 0; i < static_cast<int>(s.length()) - 2; ++i) {
        if (s.at(i) == s.at(i + 1) || s.at(i) == s.at(i + 2) || s.at(i + 1) == s.at(i + 2)) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(is_happy("iopaxioi") == false);
    
    return 0;
}