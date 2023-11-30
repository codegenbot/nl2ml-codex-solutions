#include <string>

bool is_nested(std::string str){
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

int main2() {
    assert (is_nested("]]]]]]]]") == false);
    // More test cases...
    return 0;
}