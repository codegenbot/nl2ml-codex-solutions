#include<algorithm>

int find_max_value(std::vector<int> l) {
    int max_val = l[0];
    for (int i = 1; i < l.size(); i++) {
        if (l[i] > max_val) {
            max_val = l[i];
        }
    }
    return max_val;
}