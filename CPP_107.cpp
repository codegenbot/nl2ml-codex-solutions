#include <iostream>
#include <vector>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    for (int i = 1; i <= n; ++i) {
        string str = to_string(i);
        bool is_palindrome = true;
        for (int j = 0; j < str.length() / 2; ++j) {
            if (str[j] != str[str.length() - j - 1]) {
                is_palindrome = false;
                break;
            }
        }
        if (is_palindrome && i % 2 == 0)
            result[0]++;
        else if (is_palindrome)
            result[1]++;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> res = even_odd_palindrome(n);
    cout << "Even: " << res[0] << ", Odd: " << res[1] << endl;
    return 0;
}