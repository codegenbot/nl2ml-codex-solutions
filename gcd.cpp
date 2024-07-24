#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int targetLen = target.length();
    for (int i = 0; i <= text.length() - targetLen; i++) {
        if (text.substr(i, targetLen) == target) {
            result.push_back(i);
            // Check for overlap
            while (i + targetLen < text.length()) {
                if (text.substr(i, targetLen) == target)
                    result.push_back(i + 1);
                else break;
                i++;
            }
        }
    }
    return result;
}

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}