#include <algorithm>
#include <cassert>
#include <string>
#include <vector>

pair<string, string> solve(const string& s, const string& c) {
    string result = s;

    for (char ch : c) {
        result.erase(remove(result.begin(), result.end(), ch), result.end());
    }

    string reversed = result;
    reverse(reversed.begin(), reversed.end());

    return {result, (result == reversed) ? "True" : "False"};
}