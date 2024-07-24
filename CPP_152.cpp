#include <iostream>
#include <vector>
#include <limits>

bool isSame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) {
        std::cout << "Error: The two vectors must be the same size." << std::endl;
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            std::cout << "Error: The two vectors are not the same." << std::endl;
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    while (!(std::cin >> n)) {
        std::cout << "Invalid input. Please enter an integer: ";
        std::cin.clear();  // clear the error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // ignore the bad input
    }

    std::vector<int> vec1;
    for(int i = 0; i < n; i++) {
        int x;
        while (!(std::cin >> x)) {
            std::cout << "Invalid input. Please enter an integer: ";
            std::cin.clear();  // clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // ignore the bad input
        }
        vec1.push_back(x); 
    }

    std::vector<int> vec2;
    for(int i = 0; i < n; i++) {
        int x;
        while (!(std::cin >> x)) {
            std::cout << "Invalid input. Please enter an integer: ";
            std::cin.clear();  // clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // ignore the bad input
        }
        vec2.push_back(x); 
    }

    bool checkEquality = isSame(vec1, vec2);

    if(checkEquality) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are not the same." << std::endl;
    }

    return 0;
}