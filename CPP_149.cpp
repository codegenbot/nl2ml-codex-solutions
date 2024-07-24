```cpp
#include <vector>
#include <string>
#include <algorithm>

bool issame(std::vector<std::string>& vec1, std::vector<std::string>& vec2) {
    if (vec1.size() != vec2.size()) return false;
    for (int i = 0; i < vec1.size(); ++i)
        if (vec1[i] != vec2[i]) return false;
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::string> result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    std::sort(result.begin(), result.end(),
              [&](const auto& a, const auto& b) {
                  if (a.length() == b.length()) {
                      return a < b;
                  } else {
                      return a.length() < b.length();
                  }
              });

    return result;
}