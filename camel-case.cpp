int main() {
    string input, output;
    getline(cin, input);
    
    bool capitalize = false;
    for (char c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (c != ' ') {
            if (capitalize) {
                output += toupper(c);
                capitalize = false;
            } else {
                output += tolower(c);
            }
        }
    }
    
    cout << output << endl;
    
    return 0;
}