#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (b.convert_to<string>() > to_string(a.convert_to<int())) ? b : "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = b.convert_to<string>();
        if (str.find('.') != string::npos || str.find(',') != string::npos)
            return a;
        else
            return (a.convert_to<float>() > stod(str)) ? a : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return (b.convert_to<int>() > stoi(a.convert_to<string()))) ? a : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = a.convert_to<string>();
        if (str.find('.') != string::npos || str.find(',') != string::npos)
            return b;
        else
            return (b.convert_to<float>() > stod(str)) ? b : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (b.convert_to<string>() > a.convert_to<string>()) ? b : "None";
    }
    else
        return "None";
}