int fruit_distribution(string s, int n) {
    int apples = 0;
    int oranges = 0;
    
    size_t pos = s.find("apples");
    if (pos != string::npos) {
        apples = stoi(s.substr(0, pos));
    }
    
    pos = s.find("oranges");
    if (pos != string::npos) {
        oranges = stoi(s.substr(pos + 8));
    }
    
    return n - apples - oranges;
}