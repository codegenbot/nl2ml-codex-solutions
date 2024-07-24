#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }

    int left_sum = 0, right_sum = 0;
    int min_diff = abs(left_sum - right_sum);
    int cut_index = -1;

    for (int i = 0; i < n; i++) {
         if (abs(left_sum - right_sum) <= min_diff) {
            min_diff = abs(left_sum - right_sum);
            cut_index = i;
        }
        left_sum += vec[i];
        right_sum = 0;
        for (int j = i + 1; j < n; j++) {
            right_sum += vec[j];
        }
    }

    std::vector<int> subvec1(vec.begin(), vec.begin() + cut_index + 1);
    std::vector<int> subvec2(vec.begin() + cut_index + 1, vec.end());

    for (int num : subvec1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    for (int num : subvec2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}