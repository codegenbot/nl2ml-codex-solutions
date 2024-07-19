bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

#include <boost/any.hpp>
#include <vector>
#include <list>
#include <algorithm>

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}