```cpp
#include <cassert>
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::pair<std::string, std::string>> extensions;

int compare(const std::pair<std::string, std::string>& a, const std::pair<std::string, std::string>& b) {
    return a.second.size() - b.second.size();
}

std::string Strongest_Extension(const std::string& type, const std::vector<std::string>& strong) {
    auto max_str = *std::max_element(strong.begin(), strong.end());
    extensions.push_back({type, max_str});
    return type + "." + max_str;
}

int main() {
    assert(Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    return 0;
}