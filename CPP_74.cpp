#include <vector>
#include <string>

bool issame(const vector<string>& a, const vector<string>& b) {
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

int total_match(const vector<string>& input, const vector<string>& matches) {
    int count = 0;
    for (const string& str : input) {
        if (find(matches.begin(), matches.end(), str) != matches.end()) {
            count++;
        }
    }
    return count;
}

void get_user_input(vector<string>& user_input) {
    string temp;
    cout << "Enter strings (enter 'stop' when done): ";
    while (true) {
        cin >> temp;
        if (temp == "stop") break;
        user_input.push_back(temp);
    }
}

int main() {
    vector<string> user_input;
    get_user_input(user_input);
    if (issame({{"some"}}, {{"some"}})) {  
        cout << "The two lists are the same." << endl;
    } else {
        int count = total_match(user_input, {"some"});
        cout << "Error: The two lists are not the same. Count of matches is: " << count << endl;
    }
    return 0;
}