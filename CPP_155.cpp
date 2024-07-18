#include <vector>

bool issame(std::vector<int> v1, std::vector<int> v2) {
    return v1[0] == v2[0] && v1[1] == v2[1];
}

std::vector<int> even_odd_count(int num) {
    std::vector<int> result(2, 0);
    std::string numStr = std::to_string(abs(num));
    
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            result[0]++;
        } else {
            result[1]++;
        }
    }
    
    return result;
}