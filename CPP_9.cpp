#include <limits>

std::vector<int> rolling_max(const std::vector<int>& numbers) {
    std::vector<int> maxNumbers;
    int currentMax = INT_MIN;

    for (int num : numbers) {
        if (num > currentMax)
            currentMax = num;
        maxNumbers.push_back(currentMax);
    }

    return maxNumbers;
}

bool are_vectors_equal(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size())
        return false;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }

    return true;
}

int main() {
    std::vector<int> numbers;
    int num;

    std::cout << "Enter numbers (enter -1 to stop): ";
    while ((std::cin >> num) && (num != -1)) {
        numbers.push_back(num);
    }

    std::vector<int> maxNumbers = rolling_max(numbers);

    for (int i = 0; i < maxNumbers.size(); i++) {
        std::cout << "Maximum up to " << i + 1 << " is " << maxNumbers[i] << std::endl;
    }
    
    std::vector<int> v1({3, 2, 3, 100, 3});
    std::vector<int> v2({3, 3, 3, 100, 100});
    if (are_vectors_equal(rolling_max(v1), v2))
        std::cout << "Vectors are equal" << std::endl;
    else
        std::cout << "Vectors are not equal" << std::endl;
    
    return 0;
}