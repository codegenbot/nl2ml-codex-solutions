#include <iostream>

int score(std::string s) {
    int total = 0;
    int frame = 1;
    int i = 0;
    while (frame <= 10) {
        if (s[i] == 'X') {
            total += 10;
            if (s[i + 2] == 'X') {
                total += 10 + (s[i + 4] == 'X' ? 10 : (s[i + 4] == '/' ? 10 - (s[i + 2] - '0') : s[i + 4] - '0'));
            } else {
                total += (s[i + 2] == '/' ? 10 : s[i + 2] - '0') + (s[i + 4] == '/' ? 10 - (s[i + 2] - '0') : s[i + 4] - '0');
            }
            i += 2;
        } else if (s[i + 1] == '/') {
            total += 10 + (s[i + 2] == 'X' ? 10 : s[i + 2] - '0');
            i += 3;
        } else {
            total += s[i] - '0' + s[i + 1] - '0';
            i += 2;
        }
        frame++;
    }
    return total;
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << score(s) << std::endl;
    return 0;
}