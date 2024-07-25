#include <boost/any.hpp>

namespace boost {

std::any a;
std::any b;

if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int x = boost::any_cast<int>(a);
    int y = boost::any_cast<int>(b);
    return (x > y) ? a : ((x < y) ? b : a);
} else if (a.type() == typeid(double) && b.type() == typeid(double)) {
    double x = boost::any_cast<double>(a);
    double y = boost::any_cast<double>(b);
    return (x > y) ? a : ((x < y) ? b : a);
} else if ((a.type() == typeid(std::string) || a.type() == typeid(std::wstring)) &&
           (b.type() == typeid(std::string) || b.type() == typeid(std::wstring))) {
    std::string x = boost::any_cast<std::string>(a);
    std::string y = boost::any_cast<std::string>(b);
    return (x > y) ? a : ((x < y) ? b : a);
} else if ((a.type() == typeid(std::string) || a.type() == typeid(std::wstring)) &&
           (b.type() == typeid(double))) {
    std::string x = boost::any_cast<std::string>(a);
    double y = boost::any_cast<double>(b);
    return (std::stod(x) > y) ? a : ((std::stod(x) < y) ? b : a);
} else if ((a.type() == typeid(double)) &&
           (b.type() == typeid(std::string) || b.type() == typeid(std::wstring))) {
    double x = boost::any_cast<double>(a);
    std::string y = boost::any_cast<std::string>(b);
    return (x > std::stod(y)) ? a : ((x < std::stod(y)) ? b : a);
} else {
    return a;
}
}