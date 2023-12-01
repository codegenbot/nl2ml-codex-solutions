#include <iostream>
#include <cassert>
#include <string>

bool is_nested(const std::string& str){
    int count = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '['){
            count++;
        }
        else if(str[i] == ']'){
            count--;
        }
        if(count > 1){
            return true;
        }
    }
    return false;
}

int main(){
    assert(is_nested("[]") == false);
    assert(is_nested("[[[]]]") == true);
    assert(is_nested("]]]]]]]]") == false);
    std::cout << "All test cases passed!" << std::endl;
    return 0;
}