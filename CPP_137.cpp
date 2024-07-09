#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;

int main() {
    int i1;
    float f2;
    string s3;
    cout << "Enter the first value (integer): ";
    cin >> i1;
    cout << "Enter the second value: ";
    if (cin >> f2) {
        // assume it's a float
        cout << compare_one(boost::any(i1), boost::any(f2)) << endl;
    } else {
        // assume it's a string
        cin.ignore();
        getline(cin, s3);
        cout << compare_one(boost::any(i1), boost::any(s3)) << endl;
    }
    return 0;
}

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int i = boost::any_cast<int>(a);
        float f = boost::any_cast<float>(b);
        return max(i, f);
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float f = boost::any_cast<float>(a);
        string str = boost::any_cast<string>(b);
        return (f > stof(str)) ? boost::any(f) : boost::any(str);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return (stof(str2) > stof(str1)) ? boost::any(str2) : (stof(str1) == stof(str2)) ? boost::any("None") : boost::any(str1);
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int i = boost::any_cast<int>(a);
        string str = boost::any_cast<string>(b);
        return (stof(str) > i) ? boost::any(str) : (i == stof(str)) ? boost::any("None") : boost::any(i);
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        int i = boost::any_cast<int>(b);
        return (stof(str) > i) ? boost::any(str) : (i == stof(str)) ? boost::any("None") : boost::any(i);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float f = boost::any_cast<float>(a);
        int i = boost::any_cast<int>(b);
        return (f > i) ? boost::any(f) : (i == f) ? boost::any("None") : boost::any(i);
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int i1 = boost::any_cast<int>(a);
        int i2 = boost::any_cast<int>(b);
        return (i2 > i1) ? boost::any(i2) : (i1 == i2) ? boost::any("None") : boost::any(i1);
    } else {
        return "None";
    }
}