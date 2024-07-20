#include <vector>
#include <boost/any.hpp>

std::vector<int> filter_integers(const std::list<boost::any>& values){
    std::vector<int> result;
    for (const auto &value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}