#include <vector>
#include <cassert>
#include <iostream>

bool monotonic(std::vector<float> l) {
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < l.size(); i++) {
        if (l[i] > l[i - 1]) {
            decreasing = false;
        } else if (l[i] < l[i - 1]) {
            increasing = false;
        }
    }

    return increasing || decreasing;
}

int main() {
    std::vector<float> input;
    std::cout << "Enter the numbers (space separated): ";
    float x;
    while(std::cin >> x) {
        input.push_back(x);
    }
    if (monotonic(input)) {
        std::cout << "The sequence is monotonic." << std::endl;
    } else {
        std::cout << "The sequence is not monotonic." << std::endl;
    }
}