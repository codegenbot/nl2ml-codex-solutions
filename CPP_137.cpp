#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = (string)b.convert_to<string>();
        size_t pos = str.find(',');
        if (pos != string::npos) {
            str = str.substr(0, pos);
        }
        return max((float)a.convert_to<float>(), stof(str));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        size_t pos1 = (string)a.convert_to<string>().find(',');
        size_t pos2 = (string)b.convert_to<string>().find(',');
        if (pos1 != string::npos && pos2 != string::npos) {
            return max((string)a.convert_to<string>().substr(0, pos1), (string)b.convert_to<string>().substr(0, pos2));
        } else if (pos1 == string::npos && pos2 == string::npos) {
            return "None";
        } else {
            return max(stof((string)a.convert_to<string())), stof((string)b.convert_to<string())));
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        size_t pos = (string)b.convert_to<string>().find(',');
        if (pos != string::npos) {
            return max((int)a.convert_to<int>(), stof((string)b.convert_to<string>().substr(0, pos)));
        } else {
            return "None";
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        size_t pos = (string)a.convert_to<string>().find(',');
        if (pos != string::npos) {
            return max(stof((string)a.convert_to<string>().substr(0, pos)), (int)b.convert_to<int>());
        } else {
            return "None";
        }
    }

    return b;
}