```cpp
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

std::string find_max(std::vector<std::string> words) {
    std::string max_word = *std::max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    return max_word;
}

int main() {
    assert(find_max({"play", "play", "play"}) == "play");
    return 0;
}