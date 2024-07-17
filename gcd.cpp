#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; ; i++) {
        int j = 0;
        while (i + j < n && i + j < m) {
            if (text.substr(i, m).find(target) != string::npos)
                result.push_back(i);
            j++;
        }
        i += m;
    }

};

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}