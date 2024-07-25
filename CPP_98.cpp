#include <iostream>
#include <string>

int count_upper(std::string s) {
    int count = 0;
    for(int i = 0; i < s.length(); i++) {
        if(i % 2 == 0 && (s[i] >= 'A' && s[i] <= 'E') || (s[i] >= 'A' && s[i] <= 'U')) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_upper("EEEE") == 4);
    std::cout << "Test passed!" << std::endl;
    return 0;
}