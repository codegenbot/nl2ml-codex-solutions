```cpp
#include <vector>
#include <algorithm>
#include <set>
#include <iostream>

bool same(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    std::set<int> set1(l1.begin(), l1.end());
    std::set<int> set2(l2.begin(), l2.end());
    int size = set1.size();
    std::vector<int> intersection;
    for (int i = 0; i < size; i++) {
        if (set2.find(set1.begin()[i]) != set2.end()) {
            intersection.push_back(set1.begin()[i]);
        }
    }
    return intersection;
}

int main() {
    std::vector<int> l1;
    int n1;
    std::cout << "Enter the number of elements in list 1: ";
    std::cin >> n1;
    for(int i = 0; i < n1; i++) {
        int x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        l1.push_back(x);
    }

    std::vector<int> l2;
    int n2;
    std::cout << "Enter the number of elements in list 2: ";
    std::cin >> n2;
    for(int i = 0; i < n2; i++) {
        int x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        l2.push_back(x);
    }

    if(same(l1, l2)) {
        std::cout << "The two lists are the same." << std::endl;
    } else {
        std::cout << "The two lists are different." << std::endl;
    }

    std::vector<int> intersection = common(l1, l2);
    if(intersection.size() != 0) {
        for(int i : intersection) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "No common elements." << std::endl;
    }

    return 0;
}