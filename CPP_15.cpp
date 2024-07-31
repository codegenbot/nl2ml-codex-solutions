#include <cassert>
#include <string>
#include <iostream>

std::string string_sequence(int n){
    std::string result;
    for(int i = 0; i <= n; ++i){
        result += std::to_string(i) + " ";
    }
    result.pop_back();
    return result;
}

int main(){
    assert(string_sequence(10) == "0 1 2 3 4 5 6 7 8 9 10");
    std::cout << string_sequence(10) << std::endl;
    return 0;
}