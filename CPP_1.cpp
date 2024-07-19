bool issame(vector<string> a, vector<string> b);

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
    vector<string> result;
    string group;
    int count = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                group += c;
            } else if (count == 0 && !group.empty()) {
                result.push_back(group);
                group.clear();
            }
        }
    }
    
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}