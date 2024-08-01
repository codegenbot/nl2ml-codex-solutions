#include <vector>
#include <boost/any.hpp>
#include <algorithm>
#include <cassert>

using namespace std;
using boost::any;

vector<int> filter_integers(const vector<boost::any>& values){
    vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

int main(){
    assert(issame(filter_integers({boost::any(3), boost::any('c'), boost::any(3), boost::any(3), boost::any('a'), boost::any('b')}), {3, 3, 3}));
    return 0;
}