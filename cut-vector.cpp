#include <vector>
#include <iostream>
#include <numeric>

std::pair<std::vector<int>, std::vector<int>> cut_vector(const std::vector<int>& input) {
    int left_sum = 0;
    int right_sum = std::accumulate(input.begin(), input.end(), 0);

    int min_diff = std::abs(left_sum - right_sum);
    int cut_index = 0;

    for (int i = 0; i < input.size(); i++) {
        left_sum += input[i];
        right_sum -= input[i];

        int diff = std::abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i + 1;
        }
    }

    std::vector<int> subvector1(input.begin(), input.begin() + cut_index);
    std::vector<int> subvector2(input.begin() + cut_index, input.end());

    return std::make_pair(subvector1, subvector2);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> input(n);
    for (int i = 0; i < n; i++) {
        std::cin >> input[i];
    }

    std::pair<std::vector<int>, std::vector<int>> result = cut_vector(input);

    for (int num : result.first) {
        std::cout << num << std::endl;
    }

    for (int num : result.second) {
        std::cout << num << std::endl;
    }

    return 0;
}