#include <iostream>

int score(std::string s) {
    int total = 0;
    int frame = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            total += 10;
            total += (s[i + 1] == 'X') ? 10 : (s[i + 1] == '/' ? 10 - ((s[i + 2] == 'X') ? 10 : (s[i + 2] - '0')) : s[i + 1] - '0');
            total += (s[i + 2] == 'X') ? 10 : (s[i + 2] == '/' ? 10 - (s[i + 3] - '0') : s[i + 2] - '0');
            frame++;
        } else if (s[i] == '/') {
            total += 10 - ((s[i - 1] == 'X') ? 10 : (s[i - 1] - '0'));
        } else if (s[i] == '-') {
            // do nothing
        } else {
            total += s[i] - '0';
            if (s[i + 1] == '/') {
                total += 10 - (s[i + 2] - '0');
            }
            frame++;
        }
        if (frame == 9) break;
    }
    return total;
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << score(s) << std::endl;
    return 0;
}