```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i])
            return false;
    return true;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;

    // Remove strings with odd lengths from the list
    for (const auto& str : lst) {
        if (str.length() % 2 == 0)
            result.push_back(str);
    }

    // Sort the resulted list by length and then alphabetically
    std::sort(result.begin(), result.end(),
              [](const string& a, const string& b) {
                  if (a.length() != b.length())
                      return a.length() - b.length();
                  else
                      return a < b;
              });

    return result;
}

int main() {
    vector<string> lst = {"aaaa", "bbbb", "dd", "cc"};
    auto result = sorted_list_sum(lst);
    assert(issame(result, {"ccc", "dd", "aaaa", "bbbb"}));
}