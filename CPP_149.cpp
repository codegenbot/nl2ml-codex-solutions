```
#include <algorithm>
#include <vector>
#include <string>

bool same(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });
    return result;
}

int main() {
    vector<string> lst = {"aa", "bb", "cc", "dd"};
    vector<string> result = sorted_list_sum(lst);
    bool sameResult = same(sorted_list_sum({{"a", "b"}, {"c", "d"}}), {{"c", "d"}, {"a", "b"}});
    return 0;
}