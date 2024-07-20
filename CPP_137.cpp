#include <boost/any.hpp>
#include <string>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), boost::any_cast<float>(b));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return a.convert_to<int>() > boost::any_cast<string>(b).length() ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a) > b.convert_to<int>() ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return boost::any_cast<string>(a) > boost::any_cast<string>(b) ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return a.convert_to<int>() == b.convert_to<int>() ? boost::any("None") : (a.convert_to<int>() > b.convert_to<int>()) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? a : b;
    }

    return boost::any("None");
}