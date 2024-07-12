int main() {
    string input;
    getline(cin, input);

    istringstream iss(input);
    string word;
    bool first = true;
    while (iss >> word) {
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }
        if (!first) {
            cout << " ";
        }
        first = false;
        cout << word;
    }

    return 0;
}