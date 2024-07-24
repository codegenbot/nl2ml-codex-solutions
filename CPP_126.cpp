#include <iostream>
#include <vector>

bool is_sorted(std::vector<int> lst) {
    if (lst.size() <= 1)
        return true;

    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] >= lst[i-1])
            continue;
        else {
            int count = 0;
            for (int j = i; j < lst.size(); j++) {
                if (lst[j] == lst[i])
                    count++;
                else
                    break;
            }
            if (count > 1)
                return false;
            else
                return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> input;
    int num;

    // Read input from the user
    while(std::cin >> num) {
        input.push_back(num);
    }

    if(is_sorted(input)) {
        std::cout << "The array is sorted." << std::endl;
    } else {
        std::cout << "The array is not sorted." << std::endl;
    }
    
    return 0;
}