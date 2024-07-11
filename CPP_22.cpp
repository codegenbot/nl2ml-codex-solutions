#include <vector>
#include <list>

using namespace std;

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).type() == typeid(int)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(filter_integers({3, any('c'), 3, 3, any('a'), any('b')}), {3, 3, 3}));
    return 0;
}