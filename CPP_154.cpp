#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool cycpattern_check(string a, string b) {
    int len = b.length();
    string rotation = b + b;
    for (int i = 0; i < len; ++i) {
        if (a.find(rotation.substr(i, len)) != string::npos) {
            return true;
        }
    }
    return false;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    assert(cycpattern_check("hello", "ell") == true);
    assert(cycpattern_check("helloworld", "worldhello") == true);
    assert(cycpattern_check("teststring", "stringtest") == true);
    assert(cycpattern_check("abcdefg", "gfedcba") == false);
    cout << "All tests passed!" << endl;
    return 0;
}