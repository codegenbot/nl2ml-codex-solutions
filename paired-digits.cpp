#include <string>
using namespace std;

int main() {
    int sum = pairedDigits("123211"); 
    return 0;
}

int pairedDigits(string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            sum += s[i] - '0';
        }
    }
    return sum;
}