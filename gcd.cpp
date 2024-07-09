#include <vector>
#include <string>
#include <iostream>
#include <ostream>

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
        if (b == 0) {
            break;
        }
        std::swap(a, b);
    }
    return a;
}

int main() {
    string text = "hello";
    string target = "ll";
    vector<int> result = indicesOfSubstring(text, target);
    cout << "Indices: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    int a = 48;
    int b = 18;
    int g = gcd(a, b);
    cout << "GCD of " << a << " and " << b << ": " << g << endl;

    return 0;
}