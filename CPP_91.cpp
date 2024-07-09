#include <iostream>
#include <string>

int main() {
    int count = 0;
    std::string boredom = "I";
    std::string S;
    std::cout << "Enter a sentence: ";
    std::cin >> S;

    size_t pos = 0;
    while (pos != std::string::npos) {
        if (S.substr(0, pos).compare(boredom) == 0) {
            count++;
            break;
        }
        pos = S.find(" ", pos);
    }

    std::cout << "Count: " << count << std::endl;

    return 0;
}