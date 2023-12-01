#include <string>

bool prime_length(std::string str){
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

int main(){
    assert(prime_length('0') == false); 

    // Rest of your code...

    return 0;
}