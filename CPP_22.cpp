#include <vector>
#include <list>
#include <any>
#include <cassert>

using namespace std;

bool issame(vector<int> a,vector<int>b){
    return a==b;
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value) != 0) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, any('c'), 3, 3, any('a'), any('b')}) ,{3, 3, 3}));
    return 0;
}