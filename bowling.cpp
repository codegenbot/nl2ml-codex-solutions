int main() {
    string input;
    cin >> input;

    int score = 0;
    int frame = 0;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == 'X') {
            score += 10;
            if (frame < 9) {
                score += (input[i + 1] == 'X') ? 10 : (isdigit(input[i + 1]) ? input[i + 1] - '0' : 10);
                score += (input[i + 2] == 'X') ? 10 : (input[i + 2] == '/' ? 10 - (input[i + 1] - '0') : (isdigit(input[i + 2]) ? input[i + 2] - '0' : 10));
                frame++;
            }
        } else if (input[i] == '/') {
            score += 10 - (input[i - 1] - '0');
        } else if (isdigit(input[i])) {
            score += input[i] - '0';
        }
    }

    cout << score << endl;

    return 0;
}