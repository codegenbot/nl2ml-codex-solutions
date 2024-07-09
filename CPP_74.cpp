#include <iostream>
#include <vector>
#include <string>
#include <sstream>

bool issame(std::vector<std::string> a, std::vector<std::string> b, std::vector<std::string> c) {
    if (a.size() != b.size() || a.size() != c.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i] && a[i] != c[i]) return false;
    }
    return true;
}

int total_sum(std::vector<std::string> lst) {
    int sum = 0;
    for (const auto& s : lst) {
        for (char c : s) {
            sum += static_cast<int>(c);
        }
    }
    return sum;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    if (lst1.empty() || lst2.empty()) return {};
    int sum1 = total_sum(lst1);
    int sum2 = total_sum(lst2);
    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else return lst1;
}

int main() {
    std::stringstream ss1, ss2;
    ss1 << "this";
    ss2 << "hello";

    std::vector<std::string> lst1;
    std::vector<std::string> lst2;

    std::string s1, s2;
    getline(ss1, s1);
    while (s1 != "") {
        lst1.push_back(s1);
        getline(ss1, s1);
    }

    getline(ss2, s2);
    while (s2 != "") {
        lst2.push_back(s2);
        getline(ss2, s2);
    }
    
    if (!issame(lst1, lst1, total_match(lst1, lst2))) {
        std::cout << "Test failed" << std::endl;
    } else {
        std::cout << "Test passed" << std::endl;
    }
    return 0;
}