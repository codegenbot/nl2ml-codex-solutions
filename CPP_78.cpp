#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;

int hex_key(string num) {
    int count = 0;
    string primes = "2357BD";
  
    for(int i = 0; i < num.size(); i++){
        if(primes.find(num[i]) != string::npos) {
            count++;
        }
    }
    
    return count;
}