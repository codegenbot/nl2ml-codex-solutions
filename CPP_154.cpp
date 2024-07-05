#include <iostream>
#include <string>
using namespace std;

bool cycpattern_check(string a, string b) {
    int len = b.length();
    string rotated = b + b;
    for (int i = 0; i < len; ++i) {
        if (a.find(rotated.substr(i, len)) != string::npos) {
            return true;
        }
    }
    return false;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    return 0;
}