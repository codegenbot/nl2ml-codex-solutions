#include <boost/any.hpp>
#include <string>
#include <cassert>

boost::any compare_one(boost::any a, boost::any b) {
    assert(a.type() == b.type());

    if (a.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(float)) {
        return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? a : b;
    } else if (a.type() == typeid(std::string)) {
        return stof(boost::any_cast<std::string>(a)) > stof(boost::any_cast<std::string>(b)) ? a : b;
    }

    return boost::any();
}