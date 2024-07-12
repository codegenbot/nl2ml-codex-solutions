#include <vector>
#include <list>
#include <boost/any.hpp>
#include <boost/container/list.hpp>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value) != 0) { 
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}