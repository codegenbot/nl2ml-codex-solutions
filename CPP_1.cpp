vector<string> separate_paren_groups(const string& paren_string) {
    vector<string> groups;
    string current_group;
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_count > 0) {
                current_group += c;
            }
            open_count++;
        } else if (c == ')') {
            open_count--;
            if (open_count > 0) {
                current_group += c;
            } else if (open_count == 0) {
                groups.push_back(current_group);
                current_group = "";
            }
        }
    }

    return groups;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
}