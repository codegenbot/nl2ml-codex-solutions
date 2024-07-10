#include <iostream>
#include <string>
#include <any>
#include <cassert>

using namespace std;

string compare_one(const string& s, const any& a) {
    if (a.type() == typeid(int)) {
        return "None";
    }
    return "Not None";
}

int main() {
    assert(std::any_cast<string>(compare_one("1", std::any(1))) == "None");
    return 0;
}