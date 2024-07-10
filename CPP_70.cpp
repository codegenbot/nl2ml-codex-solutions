```cpp
#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;

}

int main() {
    int n1, n2;
    std::cout << "Enter the size of first vector: ";
    std::cin >> n1;
    if(n1 > std::vector<int>::max_size()) {
        std::cerr << "Error: Size too large." << std::endl;
        return 1; 
    }
    std::vector<int> a;
    for(int i = 0; i < n1; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        int temp; 
        std::cin >> temp;
        a.push_back(temp);
    }
    std::cout << "Enter the size of second vector: ";
    std::cin >> n2;
    if(n2 > std::vector<int>::max_size()) {
        std::cerr << "Error: Size too large." << std::endl;
        return 1; 
    }
    std::vector<int> b;
    for(int i = 0; i < n2; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        int temp; 
        std::cin >> temp;
        b.push_back(temp);
    }
    if(issame(a, b)) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are not the same." << std::endl;
    }
    return 0;
}