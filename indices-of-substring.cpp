```cpp
#include <vector>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> res;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        res.push_back(pos);
        pos += 1; 
    }
    return res;
}

int main() {
    string text = "ps8Bs8B";
    string target = "s8B";
    vector<int> res = indicesOfSubstring(text, target);
    cout << to_string(res[0]) + " " << to_string(res.size()) << endl; 
    // prints 1 4
}