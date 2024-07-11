#include <iostream>
using namespace std;

int calculateScore(string s) {
    int total = 0;
    int frame = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            total += 10;
            if (s[i+1] == 'X' && i < s.size() - 2) {
                total += (s[i+2] == 'X') ? 10 : s[i+2] - '0';
                total += (s[i+2] == 'X' && i < s.size() - 4) ? ((s[i+4] == 'X') ? 10 : (s[i+4] - '0')) : ((s[i+4] == '/') ? 10 - (s[i+3] - '0') : s[i+3] - '0');
            } else if (s[i+1] == '/') {
                total += 10;
            } else {
                total += (s[i+1] == 'X') ? 10 : s[i+1] - '0';
                total += (s[i+2] == 'X' && i < s.size() - 3) ? 10 : (s[i+2] == '/') ? 10 - (s[i+1] - '0') : s[i+2] - '0';
            }
            frame++;
        } else if (s[i] == '/') {
            total += 10 - (s[i-1] - '0');
        } else if (s[i] >= '1' && s[i] <= '9') {
            total += s[i] - '0';
        }
        if (frame == 10) {
            break;
        }
    }
    return total;
}

int main() {
    string s;
    std::cin >> s;
    std::cout << calculateScore(s) << endl;
    return 0;
}