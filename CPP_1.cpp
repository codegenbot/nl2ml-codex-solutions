#include <iostream>
#include <vector>
#include <string>

using namespace std;

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
            } else if (count == 0) {
                result.push_back(group);
                group = "";
            }
        }
    }

    return result;
}

bool issame_vectors(vector<string> a, vector<string> b) {
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

int main() {
    vector<string> result = separate_paren_groups("((group1)(group2)(group3))");
    vector<string> expected_result = {"(group1)", "(group2)", "(group3)"};

    if (issame_vectors(result, expected_result)) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }

    return 0;
}