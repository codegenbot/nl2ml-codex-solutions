#include <vector>
#include <algorithm>

vector<int> sort_third(vector<int> l) {
    vector<int> result = l;
    for (int i = 0; i < l.size(); i++) {
        if ((i + 1) % 3 == 0) {
            sort(result.begin() + i - 2, result.begin() + i + 1);
        }
    }
    return result;
}