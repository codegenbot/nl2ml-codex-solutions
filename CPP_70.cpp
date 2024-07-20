#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        if (min_val == max_val) {
            result.push_back(min_val);
            lst.pop_back();
        } else {
            result.push_back(min_val);
            auto it = find(lst.begin(), lst.end(), max_val);
            lst.erase(it);
            result.push_back(max_val);
        }
    }
    return result;
}