#include <boost/any.hpp>
#include <cassert>
#include <algorithm>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any(static_cast<int>(std::max(boost::any_cast<int>(a), boost::any_cast<int>(b))));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any(static_cast<float>(std::max(boost::any_cast<float>(a), boost::any_cast<float>(b))));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return boost::any(static_cast<float>(std::max(std::stof(boost::any_cast<std::string>(a)), std::stof(boost::any_cast<std::string>(b)))));
    }
    return boost::any();
}

int main() {
    assert(boost::any_cast<float>(compare_one(1.5f, 2.3f)).type() == typeid(float));
    assert(boost::any_cast<float>(compare_one(std::to_string(1.5f), std::to_string(2.3f))).type() == typeid(float));
    assert(compare_one(std::to_string(1), 1).type() == typeid(boost::any));
    assert(boost::any_cast<std::string>(compare_one(std::string("1"), std::to_string(1))).empty());
    return 0;
}