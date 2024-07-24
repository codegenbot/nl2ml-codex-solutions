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

vector<int> findSubstringIndices(const string& text, const string& target) {
    vector<int> indices;
    int targetLen = target.length();
    for (int i = 0; i <= text.length() - targetLen; ++i) {
        if (text.substr(i, targetLen) == target) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    int a = 0, b = 0;
    string text, target;

    cout << "Enter two integers a and b: ";
    cin >> a >> b;
    cin.ignore();

    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;

    cout << "Enter a text string: ";
    cin >> text;

    cout << "Enter a target string: ";
    cin >> target;

    vector<int> result = findSubstringIndices(text, target);
    
    cout << "Indices at which target appears in text: ";
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}