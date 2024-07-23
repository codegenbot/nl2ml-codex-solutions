#include <iostream>
#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result(1); // Initialize with a capacity of 1
    int n = text.size(), m = target.size();
    
    int i = 0;
    while (i <= n - m) {
        if (text.substr(i, m) == target)
            result.push_back(i);
        i += m; 
    }
    
    return result;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> res = indicesOfSubstring(text, target);
    for (int x : res) {
        cout << x << " ";
    }
    cout << endl;
    return 0;