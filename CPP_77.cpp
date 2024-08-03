```cpp
#include <cmath>
#include <iostream>

bool iscuber(int a){
    int c = (int)cbrt(a);
    return c*c*c == a;
}

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;
    if(iscuber(num))
        std::cout << num << " is a perfect cube.\n";
    else
        std::cout << num << " is not a perfect cube.\n";
    return 0;
}