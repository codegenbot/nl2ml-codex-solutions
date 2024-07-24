#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>
#include <typeinfo>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> filter_integers(list<any> values);

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for (auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}