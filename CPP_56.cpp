```cpp
#include <string>

bool correct_bracketing(std::string brackets){
    int count = 0;
    for(int i=0; i<brackets.length(); i++){
        if(brackets[i] == '<'){
            count--;
        }
        else if(brackets[i] == '>'){
            count++;
        }
    }
    return count == 0;
}