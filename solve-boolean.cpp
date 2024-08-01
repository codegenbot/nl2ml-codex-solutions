#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string s) {
    if (s == "t") return true;
    if (s == "f") return false;

    int i = 0, j = 0;
    while(j<s.length()) {
        if(s[j] == '|') break;
        j++;
    }
    string left = s.substr(0, j);
    
    if(i+1 < j) {
        return solveBoolean(left) || solveBoolean(s.substr(i+1));
    } else {
        return solveBoolean(left);
    }

    j++;
    while(j<s.length()) {
        if(s[j] == '&') break;
        j++;
    }
    string right = s.substr(j);

    i = j;
    while(i<s.length()) {
        if(s[i] == '|') break;
        i++;
    }
    string middle = s.substr(j, i-j);

    return solveBoolean(left) && solveBoolean(middle);
}

int main() {
    // test cases
    cout << (solveBoolean("t") ? "True" : "False") << endl;  // True
    cout << (solveBoolean("f") ? "True" : "False") << endl;  // False
    cout << (solveBoolean("f&f") ? "True" : "False") << endl; // False
    cout << (solveBoolean("f&t") ? "True" : "False") << endl; // False
    cout << (solveBoolean("t&f") ? "True" : "False") << endl; // False
    return 0;
}