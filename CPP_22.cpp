#include <vector>
#include <list>
#include <cassert>
#include <variant>

std::vector<int> filter_integers(const std::list<std::variant<int, char>>& values) {
    std::vector<int> result{};
    for (const auto& value : values) {
        if (std::holds_alternative<int>(value)) {
            result.push_back(std::get<int>(value));
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}