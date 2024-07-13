#include <iostream>
#include <vector>
#include <string>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

vector<int> findIndicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    int n = text.size();
    int m = target.size();
    
    for (int i = 0; i <= n - m; ++i) {
        bool found = true;
        for (int j = 0; j < m; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }
    
    return indices;
}

int main() {
    string text = "abracadabra";
    string target = "abra";
    
    vector<int> result = findIndicesOfSubstring(text, target);
    
    cout << "Indices where target appears: ";
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;
    
    return 0;
}