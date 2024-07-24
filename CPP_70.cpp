#include <algorithm>
#include <vector>
#include <limits>

bool same(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return false;
    return true;
}

vector<int> strange_sort(vector<int> lst) {
    vector<int> result;

    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());

        auto it_min = std::find_if(lst.begin(), lst.end(), [&](int x){ return x == min_val; });
        auto it_max = std::find_if(lst.begin(), lst.end(), [&](int x){ return x == max_val; });

        result.push_back(*it_min);
        lst.erase(it_min);
        result.push_back(*it_max);
        lst.erase(it_max);
    }

    return result;
}

int main() {
    assert (same(strange_sort({111111}) , {111111}));
}