#include <iostream>
#include <string>

std::string my_strlen(std::string str) {
    return std::to_string(str.length());
}

int main() {
    assert(my_strlen("asdasnakj") == "13");
    std::cout << "The length of 'asdasnakj' is: " << my_strlen("asdasnakj") << "\n";
    return 0;
}