#include <iostream>

void your_code_here() {
    std::string s;
    std::cin >> s;
    int total = 0;
    int frame = 0;

    for (int i = 0; i < s.size(); i++) {
        if ((s[i] == 'X') || (s[i] == '/') || (s[i] == '-') || (isdigit(s[i]))) {
            total += 10;

            if (s[i] == 'X') {
                total += 10;

                if (s[i + 1] == 'X') {
                    total += 10;
                } else if (s[i + 1] == '/') {
                    total += (10 - (s[i] - '0'));
                } else {
                    total += (s[i + 1] - '0');
                }
                frame++;
            } else {
                if (s[i] == '/') {
                    total += (10 - (s[i-1] - '0'));
                } else {
                    total += (s[i] - '0');
                }
                if (frame < 10) {
                    total += (s[i + 1] == 'X') ? 10 : (s[i + 1] == '/' ? 10 - (s[i] - '0') : (s[i + 1] == '-' ? 0 : (s[i + 1] - '0')));
                    frame++;
                }
            }
        }
    }

    std::cout << total << std::endl;
}

int main() {
    your_code_here();

    return 0;
}