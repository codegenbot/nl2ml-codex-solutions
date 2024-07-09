```cpp
#include <iostream>
#include <vector>

int sumOdd(std::vector<std::string> lst) {
    int sum = 0;
    for (std::string i : lst) {
        int num = std::stoi(i);
        if (num % 2 != 0) {
            sum += num;
        }
    }
    return sum;
}

int solutions(std::vector<std::string> lst) { 
    int sum = sumOdd(lst);
    for (std::string i : lst) {
        int num = std::stoi(i);
        if (num % 2 == 0 && num > 0)
            sum -= num; 
    }
    return sum;
}

int main() {
    std::vector<std::string> lst;
    lst.push_back("3");
    lst.push_back("13");
    lst.push_back("2");
    lst.push_back("9");
    assert(solutions(lst) == 25);
    std::cout << "Test passed.\n";
}