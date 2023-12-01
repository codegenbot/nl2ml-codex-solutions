#include <vector>
#include <list>
#include <variant>
#include <cassert>

std::vector<int> filter_integers(const std::initializer_list<std::variant<int, char>>& values) {
    std::vector<int> result{};
    for (const auto& value : values) {
        if (std::holds_alternative<int>(value)) {
            result.push_back(std::get<int>(value));
        }
    }
    return result;
}

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(is_same(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}