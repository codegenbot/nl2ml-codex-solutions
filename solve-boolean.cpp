```cpp
bool solveBoolean(string s) {
    if (s == "t") return true;
    if (s == "f") return false;

    int i = 0, j = 0;
    while(j<s.length()) {
        if(s[j] == '|') break;
        j++;
    }
    string left = s.substr(0, j);
    
    j++;
    while(j<s.length()) {
        if(s[j] == '&') break;
        j++;
    }
    string right = s.substr(j);

    return solveBoolean(left) || solveBoolean(right);
}

int main() {
    cout << (solveBoolean("t") ? "True" : "False") << endl; 
    cout << (solveBoolean("f") ? "True" : "False") << endl;  
    cout << (solveBoolean("f&f") ? "True" : "False") << endl; 
    cout << (solveBoolean("f&t") ? "True" : "False") << endl; 
    cout << (solveBoolean("t&f") ? "True" : "False") << endl; 

    if(s.find('&') == string::npos && s.find('|') == string::npos) {
        return solveBoolean(s);
    }

    return 0;
}