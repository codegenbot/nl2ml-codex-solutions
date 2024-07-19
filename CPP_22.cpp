#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::holds_alternative<int>(value)) {
            result.push_back(boost::get<int>(value));
        }
    }
    return result;
}