#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int x = boost::any_cast<int>(a);
        float y = boost::any_cast<float>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = boost::any_cast<int>(a);
        string y = boost::any_cast<string>(b);
        return (stoi(y) > x) ? a : ((stoi(y) < x) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float x = boost::any_cast<float>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float x = boost::any_cast<float>(a);
        string y = boost::any_cast<string>(b);
        return (stof(y) > x) ? a : ((stof(y) < x) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string x = boost::any_cast<string>(a);
        int y = boost::any_cast<int>(b);
        return (stof(x) > y) ? a : ((stof(x) < y) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string x = boost::any_cast<string>(a);
        float y = boost::any_cast<float>(b);
        return (stof(x) > y) ? a : ((stof(x) < y) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(int) && a.convert_to(b)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any("None"));
    }
    else if (boost::any_cast<string>(a) == "0" && boost::any_cast<string>(b) == "0") {
        return boost::any("None");
    }
    else {
        return a > b ? a : b;
    }
}

int main() {
    boost::any a, b;
    // Input your values here
    cout << compare_one(a, b);
    return 0;
}