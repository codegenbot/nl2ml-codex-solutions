#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > a.convert_to<int>() ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > b.convert_to<int>() ? a : boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return b.convert_to<string>() > a.convert_to<string>() ? b : (boost::any)"None";
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        int num = boost::any_cast<int>(a);
        return num > stoi(str) ? a : boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        int num = boost::any_cast<int>(b);
        return stoi(str) > num ? a : boost::any("None");
    }
}