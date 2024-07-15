#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 48;
    int b = 18;
    cout << "GCD: " << gcd(a, b) << endl;

    string text = "Hello World";
    string target = "o";
    vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        cout << "Index: " << i << endl;
    }

    return 0;
}