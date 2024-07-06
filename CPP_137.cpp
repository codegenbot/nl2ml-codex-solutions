#include <iostream>
#include <boost/any.hpp>
#include <string>

bool convert_to(const boost::any &a, const boost::any &b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return false;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        return true;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        return true;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        return false;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        return false;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return true;
    }
    return false;
}

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        std::string str_a = boost::any_cast<std::string>(a);
        int num_b = boost::any_cast<int>(b);
        return str_a.size() > std::to_string(num_b).size() ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        std::string str_b = boost::any_cast<std::string>(b);
        double num_a = boost::any_cast<double>(a);
        return str_b.size() > std::to_string(num_a).size() ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str_a = boost::any_cast<std::string>(a);
        int num_b = boost::any_cast<int>(b);
        return str_a.size() > std::to_string(num_b).size() ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        std::string str_a = boost::any_cast<std::string>(a);
        double num_b = boost::any_cast<double>(b);
        return str_a.size() > std::to_string(num_b).size() ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str_a = boost::any_cast<std::string>(a);
        std::string str_b = boost::any_cast<std::string>(b);
        return str_a.size() > str_b.size() ? a : b;
    }
    else if (convert_to(a, b)) {
        return "None";
    }
    return a > b ? a : b;
}