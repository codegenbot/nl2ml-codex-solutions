#include <boost/any.hpp>
#include <string>
#include <cmath>

using namespace boost;

any greater(const any& a, const any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return x > y ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        return x > y ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string x = boost::any_cast<std::string>(a);
        std::string y = boost::any_cast<std::string>(b);
        return x > y ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        double y = boost::any_cast<double>(b);
        std::string x = boost::any_cast<std::string>(a);
        return stod(x) > y ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        double x = boost::any_cast<double>(a);
        std::string y = boost::any_cast<std::string>(b);
        return x > stod(y) ? a : b;
    } else {
        return a;
    }
}