#include <algorithm>

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;

    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());

        if (!lst.empty())
            result.push_back(*max_element(lst.begin(), lst.end()));
        else
            result.push_back(min_val);

        // Add the remaining elements to the result vector
        while (!lst.empty()) {
            int min_val2 = *min_element(lst.begin(), lst.end());
            result.push_back(min_val2);
            lst.erase(remove(lst.begin(), lst.end(), min_val2), lst.end());
        }
    }

    return result;
}