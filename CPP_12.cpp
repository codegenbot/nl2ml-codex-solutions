#include <string>
#include <vector>
#include <cassert>
using namespace std;

string longest(const vector<string>& strings) {
    if (strings.empty()) {
        return "None";
    }
    
    string longestStr = strings[0];
    for (const string& str : strings) {
        if (str.length() > longestStr.length() || (str.length() == longestStr.length() && str < longestStr)) {
            longestStr = str;
        }
    }
    
    return longestStr;
}

int main() {
    assert(longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
    
    return 0;
}