#include <vector>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target)
            result.push_back(i);
    }

    return result;
}

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << endl;

    string text;
    getline(cin, text);
    string target;
    cin >> target;

    vector<int> indices = indicesOfSubstring(text, target);

    for (int i : indices)
        cout << i << " ";

    return 0;
}