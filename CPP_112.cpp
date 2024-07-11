#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> reverse_delete(const string& s, const string& c) {
    string result = "";
    for (auto ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string result_reverse = result;
    reverse(result_reverse.begin(), result_reverse.end());
    return {result, result == result_reverse ? "True" : "False"};
}

bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), { "", "True" }));
}