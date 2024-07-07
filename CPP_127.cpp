```cpp
#include <iostream>
#include <string>
#include <sstream>

std::string intersection(std::pair<int, int> interval1, std::pair<int, int> interval2) {
    if (interval1.first > interval2.second || interval2.first > interval1.second)
        return "no";
    else
    {
        std::pair<int, int> minInterval = (interval1.first <= interval2.first) ? interval1 : interval2;
        std::string str = std::to_string(minInterval.first);
        if (minInterval.first == interval1.first) {
            str += " " + std::to_string(interval1.second);
        } else {
            str += " " + std::to_string(interval1.second);
        }
        return str;
    }
}

int main() {
    assert(intersection({-2, -2}, {-3, -2}) == "no";
    
    std::pair<int, int> interval1;
    std::cout << "Enter the first interval's start: ";
    int temp;
    std::cin >> temp; 
    interval1.first = temp;

    std::cout << "Enter the first interval's end: ";
    std::cin >> temp; 
    interval1.second = temp;

    std::pair<int, int> interval2;
    std::cout << "Enter the second interval's start: ";
    std::cin >> temp; 
    interval2.first = temp;

    std::cout << "Enter the second interval's end: ";
    std::cin >> temp; 
    interval2.second = temp;

    if (intersection(interval1, interval2) == "no")
        std::cout << "The intervals do not intersect.\n";
    else
        std::cout << "The intervals intersect.\n";

    return 0;
}