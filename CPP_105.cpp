#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a, vector<vector<string>> b) {
    if (a.size() != b[0].size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[0][i]) {
            return false;
        }
    }
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<std::string> temp;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            temp.push_back(to_string(i));
        }
    }

    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());

    vector<string> result;
    for (int i = 0; i < temp.size(); i++) {
        switch (stoi(temp[i])) {
            case 1:
                result.push_back("One");
                break;
            case 2:
                result.push_back("Two");
                break;
            case 3:
                result.push_back("Three");
                break;
            case 4:
                result.push_back("Four");
                break;
            case 5:
                result.push_back("Five");
                break;
            case 6:
                result.push_back("Six");
                break;
            case 7:
                result.push_back("Seven");
                break;
            case 8:
                result.push_back("Eight");
                break;
            case 9:
                result.push_back("Nine");
                break;
        }
    }

    return result;
}

int main() {
    vector<int> input = {1, 4, 8};
    vector<string> output = by_length(input);
    
    if (issame({{"One", "Four", "Eight"}}, {{output}})) {
        for (string str : output) {
            cout << str << endl;
        }
    } else {
        cout << "Output is incorrect." << endl;
    }
}