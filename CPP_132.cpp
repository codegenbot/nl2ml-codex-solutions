#include <iostream>
#include <cassert>

bool is_nested(const std::string& str) {
    int count = 0;
    for(char c : str){
        if(c == '['){
            count++;
        } else if(c == ']' && count > 0){
            count--;
        }
    }
    return count < 2 && count > -2;
}

int main() {
    assert(is_nested("[]") == true);
    assert(is_nested("[[]]") == true);
    assert(is_nested("[[[]]") == false);
    assert(is_nested("]]]]]]]]") == false);
    std::cout << "All tests passed successfully." << std::endl;
    return 0;
}