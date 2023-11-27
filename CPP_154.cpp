#include <string>
#include <cassert>

using namespace std;

bool cycpattern_check(string a, string b) {
    if (a.length() < b.length()) {
        return false;
    }

    for (int i = 0; i < a.length(); i++) {
        string rotated = a.substr(i) + a.substr(0, i);
        if (rotated.find(b) != string::npos) {
            return true;
        }
    }

    return false;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);

    return 0;
}