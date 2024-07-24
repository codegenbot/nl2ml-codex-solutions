#include <iostream>
#include <cassert>

bool is_multiply_prime(int num){
    if(num < 2) return false;
    for(int i = 2; i <= num / 2; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int num;
    std::cout << "Enter a number less than 100: ";
    std::cin >> num;
    std::cout << (is_multiply_prime(num) ? "true" : "false") << std::endl;
    return 0;
}