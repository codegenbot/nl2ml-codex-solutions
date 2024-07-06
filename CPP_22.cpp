```cpp
#include <vector>
#include <list>
#include <any>
#include <cassert>
#include <boost/any.hpp>

bool issame(std::vector<int>& a, std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), std::vector<int>{3, 3, 3}));
    return 0;
}