int main() {
    string input;
    getline(cin, input);
    
    string output = "";
    bool capitalizeNext = false;
    
    for (char c : input) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (c == ' ') {
            output += c;
            capitalizeNext = false;
        } else {
            if (capitalizeNext) {
                output += toupper(c);
            } else {
                output += tolower(c);
            }
            capitalizeNext = false;
        }
    }
    
    cout << output << endl;
    
    return 0;
}