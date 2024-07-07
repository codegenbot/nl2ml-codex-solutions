#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > boost::any_cast<int>(a) ? b : any("None");
    }
    if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        size_t pos = str.find(',');
        if (pos != string::npos) {
            str[0] = '.';
            return str;
        } else {
            return (int)stoi(str) > boost::any_cast<int>(a) ? b : any("None");
        }
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a) > b ? a : any("None");
    }
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        size_t pos = str.find(',');
        if (pos != string::npos) {
            str[0] = '.';
            return str;
        } else {
            return str > to_string(b) ? a : any("None");
        }
    }
    if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::any_cast<string>(b);
        size_t pos = str.find(',');
        if (pos != string::npos) {
            str[0] = '.';
            return str > a ? b : any("None");
        } else {
            return str > to_string(boost::any_cast<int>(a)) ? b : any("None");
        }
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        size_t pos1 = str1.find(',');
        string str2 = boost::any_cast<string>(b);
        size_t pos2 = str2.find(',');
        if (pos1 != string::npos && pos2 != string::npos) {
            return str2 > str1 ? b : any("None");
        } else if (pos1 == string::npos && pos2 != string::npos) {
            return str2 > str1 ? b : any("None");
        } else if (pos1 != string::npos && pos2 == string::npos) {
            return str1 > str2 ? a : any("None");
        } else {
            return str1.compare(str2) > 0 ? a : any("None");
        }
    }
    return any("None");
}