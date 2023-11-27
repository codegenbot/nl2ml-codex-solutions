#include <iostream>
#include <cassert>
#include <string>

bool correct_bracketing(std::string brackets){
    int count = 0;
    for(int i=0; i<brackets.length(); i++){
        if(brackets[i] == '('){
            count++;
        }
        else if(brackets[i] == ')'){
            count--;
        }
        if(count < 0){
            return false;
        }
    }
    return count == 0;
}

int main(){
    assert(!correct_bracketing("()()(()())()))()"));
    std::cout << "All test cases passed!" << std::endl;
    return 0;
}