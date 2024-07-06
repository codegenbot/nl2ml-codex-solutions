#include <string>

using namespace std;

bool prime_length(string str) {
    int len = str.length();
    if (len <= 1)
        return true;
    for(int i=2; i*i<=len; i++){
        if(len%i==0){
            return false;
        }
    }

    // Check divisibility from the number right after the square root to len.
    for(int i=i+1; i<=len; i++){
        if(len%i==0)
            return false;
    }
    return true;
}