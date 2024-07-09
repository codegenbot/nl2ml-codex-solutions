```cpp
#include <iostream>
#include <string>

int count_upper(std::string s){
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(i % 2 == 0 && (s[i] >= 'A' && s[i] <= 'E') || (s[i] >= 'A' && s[i] <= 'U')){
            count++;
        }
    }
    return count;
}

int main(){
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    int result = count_upper(str);
    std::cout << "Number of uppercase letters at even positions: " << result << std::endl;
    return 0;
}