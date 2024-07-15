int count_chars(const vector<string>& lst) {
    int count = 0;
    for (const string& s : lst) {
        count += s.size();
    }
    return count;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (count_chars(lst1) < count_chars(lst2)) {
        return lst1;
    } else {
        return count_chars(lst1) == count_chars(lst2) ? lst1 : lst2;
    }
}