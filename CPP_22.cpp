#include <vector>
#include <list>
#include "/usr/include/boost/any.hpp"
#include <typeindex>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::is_same(boost::any_cast<typename boost::type_of(value).type()>(value), int())) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, boost::any('c'), 3, 3, boost::any('a'), boost::any('b') }), {3, 3, 3}));
    return 0;
}