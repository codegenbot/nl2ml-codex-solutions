#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int count_min = 0;
        for (int num : lst) {
            if (num == min_val) {
                count_min++;
            }
        }
        if (count_min > 1) {
            for (int i = 0; i < count_min; i++) {
                result.push_back(min_val);
                lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());
            }
        } else {
            result.push_back(min_val);
            lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());
        }
    }
    return result;
}

int main() {
    assert(issame(strange_sort_vector({111111}), {111111}));
    return 0;
}