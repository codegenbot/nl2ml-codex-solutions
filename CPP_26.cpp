#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() == 0 && b.size() == 0) return true;
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> removeDuplicates(const std::vector<int>& numbers) {
    std::vector<int> uniqueNumbers;
    for (int num : numbers) {
        bool found = false;
        for (int i = 0; i < uniqueNumbers.size(); i++) {
            if (uniqueNumbers[i] == num) {
                found = true;
                break;
            }
        }
        if (!found) {
            uniqueNumbers.push_back(num);
        }
    }
    return uniqueNumbers;
}

int cpp_main() {
    int n;    
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<int> numbers;
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }
    
    std::vector<int> uniqueNumbers = numbers;
    std::sort(uniqueNumbers.begin(), uniqueNumbers.end());
    
    if (!issame(numbers, uniqueNumbers)) {
        std::cout << "Unique numbers: ";
        for (int num : uniqueNumbers) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "All elements are duplicates." << std::endl;
    }
    
    assert(issame(removeDuplicates({1, 2, 3, 2, 4, 3, 5}) , {1, 4, 5}));
    return 0;
}