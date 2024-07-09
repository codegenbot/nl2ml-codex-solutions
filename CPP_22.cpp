#include <boost/any.hpp>

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (auto& value : values) {
        if (boost::any_cast<int>(value, true)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;