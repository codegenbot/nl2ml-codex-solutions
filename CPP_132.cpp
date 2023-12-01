#include <string>

int is_nested(const std::string& str){
    int count = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '['){
            count++;
        }
        else if(str[i] == ']'){
            count--;
        }
        if(count > 1){
            return 1;
        }
    }
    return 0;
}