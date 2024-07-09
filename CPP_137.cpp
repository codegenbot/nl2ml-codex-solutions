```cpp
#include <boost/any.hpp>
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return ((int)boost::any_cast<int>(a) > boost::any_cast<float>(b)) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return ((int)boost::any_cast<int>(a) > boost::any_cast<double>(b)) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str = boost::any_cast<std::string>(a);
        int num = boost::any_cast<int>(b);
        return (std::stoi(str) > num) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return ((float)boost::any_cast<float>(a) > (int)b) ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return ((double)boost::any_cast<double>(a) > (int)b) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string str = boost::any_cast<std::string>(a);
        float num = boost::any_cast<float>(b);
        return (std::stof(str) > num) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        std::string str = boost::any_cast<std::string>(a);
        double num = boost::any_cast<double>(b);
        return (std::stod(str) > num) ? a : b;
    }
    return a;
}