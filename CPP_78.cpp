#include <string>

int hex_key(std::string num){
    int count = 0;
    std::string primes = "2357BD";
    
    for(int i=0; i<num.length(); i++){
        if(primes.find(num[i]) != std::string::npos){
            count++;
        }
    }
    
    return count;
}

int main() {
    // Test cases
    assert(hex_key("") == 0);
    // Add more test cases here
    
    return 0;
}