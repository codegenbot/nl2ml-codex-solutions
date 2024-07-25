#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t pos = 0;

    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += target.size();
    }

    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::string text;
    std::cin >> text;

    std::vector<int> result = indicesOfSubstring(text, text.substr(0, 1));

    for (int i : result) {
        std::cout << i << "\n";
    }

    return 0;
}