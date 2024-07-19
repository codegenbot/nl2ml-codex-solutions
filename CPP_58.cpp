#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
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

int main_test() {
    int n;
    cin >> n;

    vector<int> user_input;

    // Initialize the vector here
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        user_input.push_back(x);  
    }
    if (issame(user_input, user_input)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}