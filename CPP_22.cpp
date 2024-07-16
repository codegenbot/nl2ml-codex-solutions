#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

using namespace std;

vector<int> filter_integers(list<boost::any> values);

bool issame(vector<int> a, vector<int> b);

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (auto val : values) {
        if (auto ptr = boost::any_cast<int>(&val)) {
            result.push_back(*ptr);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}