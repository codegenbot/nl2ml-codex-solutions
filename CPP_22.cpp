```cpp
#include <boost/any.hpp>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;
using namespace boost;

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).good()) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

bool areEqual(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(areEqual(filter_integers({3, any('c'), 3, 3, any('a'), any('b')}), {3, 3, 3}) );
    return 0;
}