vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int total1 = 0, total2 = 0;
    for (const string& str : lst1) {
        total1 += str.length();
    }
    for (const string& str : lst2) {
        total2 += str.length();
    }
    
    if (total1 < total2) {
        return lst1;
    } else {
        return lst2;
    }
}