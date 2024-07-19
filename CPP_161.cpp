#include <string>
#include <algorithm>

std::string solve(std::string s);

std::string solve(std::string s){
    int n = s.size();
    bool hasLetter = false;
    for(int i=0; i<n; i++){
        if(isalpha(s[i])){
            hasLetter = true;
            if(islower(s[i])){
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
    if(!hasLetter){
        std::reverse(s.begin(), s.end());
    }
    return s;
}