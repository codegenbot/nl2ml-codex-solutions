#include <string>
#include <unordered_set>
using namespace std;

bool is_happy(string s){
    if(s.length() < 3) return false;
    unordered_set<char> seen;

    for(int i = 0; i < s.length() - 2; ++i){
        if(s[i] == s[i+1] || s[i] == s[i+2] || s[i+1] == s[i+2]){
            return false;
        }
    }
    
    return true;
}