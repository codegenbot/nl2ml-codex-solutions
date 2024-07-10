#include <boost/lexical_cast.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::is_integer(value)) {
            int integer = boost::any_cast<int>(value);
            result.push_back(integer);
        }
    }
    return result;
}