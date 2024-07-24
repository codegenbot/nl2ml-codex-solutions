#include <vector>
#include <any>
#include <boost/any.hpp>

bool issame(std::vector<boost::any> values) {
    std::vector<int> expected = {3};
    return filter_integers(values) == expected;
}

int main() {
    assert(issame({3, boost::any('c'), 3, boost::any(3), boost::any('a'), boost::any('b')}));
    return 0;
}