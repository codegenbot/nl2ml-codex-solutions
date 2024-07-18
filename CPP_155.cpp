#include <vector>
#include <string>
#include <cassert>

std::vector<int> even_odd_count(int num) {
    std::vector<int> result(2, 0);
    std::string num_str = std::to_string(abs(num));
    for (char c : num_str) {
        if ((c - '0') % 2 == 0) {
            result[0]++;
        } else {
            result[1]++;
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b);