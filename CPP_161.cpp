#include <string>
using namespace std;

string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? char(c - ('a' - 'A')) : char(c + ('a' - 'A'));
        } else {
            result += c;
        }
    }
    return result.empty() ? std::string(string(s)).rbegin()->reverse().str() : result;
}