#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1.size() == v2.size() && std::equal(v1.begin(), v1.end(), v2.begin());
}

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for (auto val : values){
        if (val.type() == typeid(int)){
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main() {
    // Main function logic here
    return 0;
}