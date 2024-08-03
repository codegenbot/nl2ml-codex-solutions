#include <iostream>
#include <string>

bool isPrime(int n){
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::cin >> sentence;

    std::string result = "";
    int len = 0;
    for(int i = 0; i < sentence.size(); i++){
        if(sentence[i] == ' '){
            if(isPrime(len)) result += sentence.substr(len - (i + 1), i - len) + " ";
            len = 0;
        }else{
            len++;
        }
    }
    if(isPrime(len)) result += sentence.substr(len - len, len);
    std::cout << words_in_sentence(sentence) << std::endl;

    return 0;
}