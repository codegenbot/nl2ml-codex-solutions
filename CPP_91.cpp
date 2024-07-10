```
#include <string>
#include <iostream>

int is_bored(std::string S){
    int count = 0;
    std::string boredom = "I";
    size_t pos = 0;

    while((pos = S.find(".", pos)) != std::string::npos ||
          (pos = S.find("?", pos)) != std::string::npos ||
          (pos = S.find("!", pos)) != std::string::npos){
        if(S.substr(0, boredom.size()).compare(boredom) == 0)
            count++;
        pos += 1;
    }

    return count;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int result = is_bored(input);
    std::cout << "Result: " << result << std::endl;
    return 0;
}