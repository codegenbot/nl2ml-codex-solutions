#include <string>
#include <cctype>

std::string solve(std::string s){
    std::string result;
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            result += (islower(s[i])) ? toupper(s[i]) : tolower(s[i]);
        } else {
            result += s[i];
        }
    }
    return result;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    return 0;
}