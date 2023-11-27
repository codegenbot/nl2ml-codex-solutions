#include <iostream>
#include <string>

using namespace std;

bool prime_length(string str){
    int length = str.length();
    if(length <= 1){
        return false;
    }
    for(int i=2; i*i<=length; i++){
        if(length % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    assert (prime_length("0") == false);
    // Add more test cases here
}