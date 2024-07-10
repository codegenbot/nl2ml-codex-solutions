#include <string>

std::string fix_spaces(std::string text){
    int consecutive_spaces = 0;
    std::string result = "";
    for(char c : text){
        if(c == ' '){
            consecutive_spaces++;
            if(consecutive_spaces > 2){
                result.pop_back();
                result.pop_back();
                result += "-";
            } else {
                result += "_";
            }
        } else {
            result += c;
            consecutive_spaces = 0;
        }
    }
    return result;
}

int main() {
    // Your main function code here
    return 0;
}