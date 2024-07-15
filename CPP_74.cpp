int count_chars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (count_chars(lst1) < count_chars(lst2)) {
        return lst1;
    } else {
        return count_chars(lst1) == count_chars(lst2) ? lst1 : lst2;
    }
}