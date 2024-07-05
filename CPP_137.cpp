#include <iostream>
#include <string>
#include <algorithm>
#include <any>
#include <cassert>

using namespace std;

double convertToDouble(const string &s) {
    string temp = s;
    replace(temp.begin(), temp.end(), ',', '.');
    return stod(temp);
}

std::any compare_one(std::any a, std::any b) {
    double valA, valB;

    if (a.type() == typeid(int))
        valA = std::any_cast<int>(a);
    else if (a.type() == typeid(float))
        valA = std::any_cast<float>(a);
    else if (a.type() == typeid(string))
        valA = convertToDouble(std::any_cast<string>(a));
    else
        throw invalid_argument("Unsupported type");

    if (b.type() == typeid(int))
        valB = std::any_cast<int>(b);
    else if (b.type() == typeid(float))
        valB = std::any_cast<float>(b);
    else if (b.type() == typeid(string))
        valB = convertToDouble(std::any_cast<string>(b));
    else
        throw invalid_argument("Unsupported type");

    if (valA > valB)
        return a;
    else if (valB > valA)
        return b;
    else
        return string("None");
}

int main() {
    auto result = compare_one(5, string("4,9"));
    if (result.type() == typeid(int))
        cout << std::any_cast<int>(result) << endl;
    else if (result.type() == typeid(string))
        cout << std::any_cast<string>(result) << endl;
    else
        cout << std::any_cast<double>(result) << endl;

    auto result2 = compare_one(string("1"), 1);
    if (result2.type() == typeid(int))
        cout << std::any_cast<int>(result2) << endl;
    else if (result2.type() == typeid(string))
        cout << std::any_cast<string>(result2) << endl;
    else
        cout << std::any_cast<double>(result2) << endl;

    assert(std::any_cast<string>(compare_one(string("1"), 1)) == "None");

    return 0;
}