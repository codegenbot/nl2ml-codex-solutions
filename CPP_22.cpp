```cpp
#include <vector>
#include <list>
#include <any>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (std::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(std::issame(filter_integers({1, 2, 3}), {1, 2, 3}));
    return 0;
}