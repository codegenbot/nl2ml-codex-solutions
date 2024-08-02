#include <cassert>
#include <list>
#include <vector>
#include <boost/any.hpp>

bool issame(vector<int> a, vector<int> b);

vector<int> filter_integers(std::list<boost::any> values) {
    vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}