#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; ; i++) {
        int j = 0;
        while (i + j < n && j < m && text[i + j] == target[j]) {
            if (j == m - 1) {
                result.push_back(i);
                j++;
                while (i + j < n && j < m && text[i + j] == target[j]) {
                    j++;
                }
            } else {
                j++;
            }
        }
    }

    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices)
        cout << i << " ";
    cout << endl;

    return 0;
}