#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::string& s1, const std::string& s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    for (int i = 0; i < s1.length(); ++i) {
        if (s1[i] != s2[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::string> result;

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
    std::vector<std::string> lst = {"abc", "def", "ghi", "jkl", "mno"};
    for (const auto& str : sorted_list_sum(lst)) {
        if (issame("abc", str)) {
            std::cout << str << " is same as 'abc'\n";
        } else {
            std::cout << str << "\n";
        }
    }
    return 0;
}