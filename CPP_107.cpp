#include <vector>
#include <string>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

std::vector<int> even_odd_palindrome(int n){
    std::vector<int> res(2, 0);
    for(int i = 1; i <= n; ++i){
        std::string s = std::to_string(i);
        std::string rev = s;
        std::reverse(rev.begin(), rev.end());
        if(s == rev){
            if(i % 2 == 0){
                res[0]++;
            } else {
                res[1]++;
            }
        }
    }
    return res;
}

int main(){
    // Main function logic here
    return 0;
}