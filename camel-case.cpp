int main() {
    string input;
    getline(cin, input);

    bool flag = false;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '-') {
            flag = true;
            continue;
        }

        if (flag) {
            cout << (char)toupper(input[i]);
            flag = false;
        } else {
            cout << input[i];
        }
    }

    return 0;
}