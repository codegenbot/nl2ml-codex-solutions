#include <boost/any.hpp>

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).has_value()) {
            result.push_back(any_cast<int>(value).get());
        }
    }
    return result;