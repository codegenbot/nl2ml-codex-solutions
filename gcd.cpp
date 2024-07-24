#include <vector>
#include <string> // include this library
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i=0; i<=n-m; i++){
        if(text.substr(i,m) == target){
            result.push_back(i);
            while(true){
                i++;
                if(i+n < (i+m)){
                    if(text.substr(i,m) == target){
                        result.push_back(i);
                    }
                    else{
                        break;
                    }
                }
                else{
                    break;
                }
            }
        }
    }
    
    return result;
}

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}