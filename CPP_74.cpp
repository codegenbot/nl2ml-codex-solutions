```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a) {
    bool b = true;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != a[0]) {
            b = false;
            break;
        }
    }
    return b;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int sum1 = 0;
    for (const std::string& str : lst1) {
        sum1 += str.length();
    }
    
    int sum2 = 0;
    for (const std::string& str : lst2) {
        sum2 += str.length();
    }

    if (sum1 < sum2) {
        return lst1;
    } else if (sum1 > sum2) {
        return lst2;
    } else {
        return issame(lst1) ? lst1 : total_match(total_match(lst1, lst2), {});
    }
}

int main() {
    std::vector<std::string> result = total_match({"this"}, {});
    for (const auto& str : result) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
}