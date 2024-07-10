Here is the completed code:

```cpp
#include <boost/any.hpp>
#include <string>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (b.convert_to<string>() > to_string(a.convert_to<int())) ? b : "None";
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        float num = a.convert_to<float>();
        if (str.find('.') != string::npos || str.find(',') != string::npos)
            return str;
        else
            return (stof(str) > num) ? str : "None";
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int num = a.convert_to<int>();
        string str = boost::any_cast<string>(b);
        if (str.find('.') != string::npos || str.find(',') != string::npos)
            return str;
        else
            return (stof(str) > num) ? str : "None";
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float num = a.convert_to<float>();
        string str = boost::any_cast<string>(b);
        if (str.find('.') != string::npos || str.find(',') != string::npos)
            return str;
        else
            return (stof(str) > num) ? str : "None";
    } else {
        if (a.convert_to<int>() == a.convert_to<float>()) {
            return "None";
        } else {
            return max(a, b);
        }
    }
}