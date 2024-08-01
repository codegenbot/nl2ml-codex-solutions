#include <vector>
#include <boost/any.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if(boost::any_cast<int>(value).which() == boost::any::typeindex<std::decay_t<int>>()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}