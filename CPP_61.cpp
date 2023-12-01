#include <string>
#include <cassert>

bool correct_bracketing(std::string brackets){
    int count = 0;
    for(int i = 0; i < brackets.length(); i++){
        if(brackets[i] == '('){
            count++;
        } else if(brackets[i] == ')'){
            count--;
        }
        if(count < 0){
            return false;
        }
    }
    return count == 0;
}

int main() {
    assert(not correct_bracketing("()()(()())())()"));
    return 0;
}