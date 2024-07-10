#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a.convert_to<int>() > (double)b.convert_to<double>() ? b : a;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a.convert_to<double>() > (int)b.convert_to<int>() ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        return str1 > str2 ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num1 = any_cast<int>(a);
        string str2 = any_cast<string>(b);
        return num1 > stoi(str2) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str1 = any_cast<string>(a);
        int num2 = any_cast<int>(b);
        return stoi(str1) > num2 ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double num1 = any_cast<double>(a);
        string str2 = any_cast<string>(b);
        return num1 > stod(str2) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string str1 = any_cast<string>(a);
        double num2 = any_cast<double>(b);
        return stod(str1) > num2 ? a : b;
    }
    return boost::any("None");
}