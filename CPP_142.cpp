```cpp
#include <iostream>
#include <vector>

int sum_squares(std::vector<int> lst) {
    int total = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 3 == 0 && i % 4 != 0 || i % 4 == 0 && i % 3 != 0) {
            total += lst[i] * lst[i];
        } else if (i % 4 == 0 && i % 3 == 0) {
            total += lst[i] * lst[i] * lst[i];
        }
    }
    return total;
}

int main() {
    std::vector<int> inputVector; 
    int n; 

    std::cout << "Enter the number of elements in the vector: ";
    std::cin >> n;

    for(int i = 0; i < n; ++i) {
        int num;
        while(true) {
            std::cout << "Enter element " << i + 1 << ": ";
            std::cin >> num;
            
            if (num >= 0 && num <= 100) {
                inputVector.push_back(num);
                break;
            }
            else {
                std::cerr << "Invalid input. Please enter a number between 0 and 100." << std::endl;
            }
        }
    }

    int result = sum_squares(inputVector);
    std::cout << "Sum of squares is: " << result << std::endl;

    return 0;
}