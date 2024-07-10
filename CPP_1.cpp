bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> separate_paren_groups(string paren_string);

int main() {
    string input;
    cin >> input;
    vector<string> result = separate_paren_groups(input);
    for (const string& group : result) {
        cout << group << endl;
    }
    return 0;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> groups;
    string current_group;
    int balance = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (balance > 0) {
                current_group += c;
            }
            balance++;
        } else if (c == ')') {
            balance--;
            if (balance > 0) {
                current_group += c;
            } else if (balance == 0) {
                groups.push_back(current_group);
                current_group = "";
            }
        }
    }

    return groups;
}