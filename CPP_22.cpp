```
#include <vector>
#include <list>
#include <boost/any.hpp>

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (!value.type() || boost::any_cast<bool>(value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}