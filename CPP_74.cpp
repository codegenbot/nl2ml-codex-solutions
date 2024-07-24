#include <iostream>
#include <vector>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::pair<std::vector<std::string>, bool> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int sum1 = 0;
    for (const std::string& s : lst1) {
        sum1 += s.length();
    }
    int sum2 = 0;
    for (const std::string& s : lst2) {
        sum2 += s.length();
    }
    if (sum1 < sum2) return {lst1, false};
    else if (sum1 > sum2) return {lst2, false};
    else {
        if (issame(lst1, lst2)) return {lst1, true};
        else return {{}, false};
    }
}

int main() {
    std::vector<std::string> lst1 = {"a", "b", "c"};
    std::vector<std::string> lst2 = {"d", "e", "f"};

    if (issame(lst1, lst2)) {
        std::cout << "The lists are the same.\n";
    } else {
        auto result = total_match(lst1, lst2);
        if (std::equal(result.first.begin(), result.first.end(), lst1.begin())) {
            std::cout << "List 1 is the match of list 2.\n";
        } else {
            std::cout << "List 2 is the match of list 1.\n";
        }
    }

    return 0;
}