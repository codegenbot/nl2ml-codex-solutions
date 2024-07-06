#include <boost/convert.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any(a.convert_to(b));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        std::string str_a = boost::any_cast<std::string>(a);
        int num_b = boost::any_cast<int>(b);
        return str_a.size() > std::to_string(num_b).size() ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num_a = boost::any_cast<int>(a);
        int num_b = boost::any_cast<int>(b);
        return num_a > num_b ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double num_a = boost::any_cast<double>(a);
        double num_b = boost::any_cast<double>(b);
        return num_a > num_b ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str_a = boost::any_cast<std::string>(a);
        std::string str_b = boost::any_cast<std::string>(b);
        return str_a > str_b ? a : b;
    }
    else if (a.type() == typeid(int) && a.convert_to(b)) {
        return "None";
    }
    else if (a.type() == typeid(double) && a.convert_to(b)) {
        return "None";
    }
    else if (a.type() == typeid(std::string) && a.convert_to(b)) {
        return "None";
    }
    else {
        return a > b ? a : b;
    }
}