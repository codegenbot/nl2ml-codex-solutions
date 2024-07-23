#include <iostream>
#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        result.push_back(pos);
        pos += target.size(); // add the length of the target to find the next occurrence
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    string text;
    cin >> text;
    vector<int> indices = indicesOfSubstring(text, text.substr(0, n));
    for (auto i : indices) {
        cout << i << " ";
    }
    cout << endl;
    return 0;