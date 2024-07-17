#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i=0; i<=n-m; i++) {
        int pos = text.find(target, i);
        while (pos != string::npos) {
            result.push_back(pos); 
            pos = text.find(target, i+1); // start searching from the next position of previous match
        }
    }

    return result;
}

int main() {
    string text, target;
    cout << "Enter the text: ";
    if (!(cin >> str)) {
        cout << "Invalid input. Please try again.\n";
        cout << "Enter the text: ";
        getline(cin, text);  // Clear the bad input
    }

    cout << "Enter the target: ";
    if (!(cin >> str)) {
        cout << "Invalid input. Please try again.\n";
        cout << "Enter the target: ";
        getline(cin, target);  // Clear the bad input
    }

    vector<int> results = indicesOfSubstring(text, target);
    for (int i : results) {
        cout << i << " ";
    }
    return 0;
}