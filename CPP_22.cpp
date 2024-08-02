```cpp
#include <vector>
#include <algorithm>

bool operator==(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(std::equal(filter_integers({3, 'c', 3, 3, 'a', 'b'}).begin(), filter_integers({3, 'c', 3, 3, 'a', 'b'}).end(), {3, 3, 3}.begin()));
    return 0;
}