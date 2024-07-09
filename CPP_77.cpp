```c++
#include <iostream>

bool isCube(int n) {
    int i = 1;
    while (i * i * i <= n) {
        if (i * i * i == n)
            return true;
        i++;
    }
    return false;

}

int main() { 
    int num;
    std::cout << "Enter a cube number (like 1729): ";
    std::cin >> num;
    
    std::cout << "You entered: " << std::to_string(num) << std::endl; 
    return 0;
}