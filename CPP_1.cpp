#include <iostream>
#include <vector>
#include <string>

vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
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
            if (open_count == 0) {
                result.push_back(current_group);
                current_group = "";
            } else {
                current_group += c;
            }
        }
    }

    return result;
}

int main() {
    string input_string;
    cout << "Enter the input parenthesis string: ";
    cin >> input_string;
    
    vector<string> groups = separate_paren_groups(input_string);
    
    cout << "Separated groups:" << endl;
    for (const string& group : groups) {
        cout << group << endl;
    }

    return 0;
}