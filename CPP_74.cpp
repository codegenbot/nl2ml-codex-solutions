bool issame(const vector<string>& lst1, const vector<string>& lst2) {
    return lst1 == lst2;
}

int total_chars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}

vector<string> total_match(const vector<string>& lst1, const vector<string>& lst2) {
    if (total_chars(lst1) < total_chars(lst2)) {
        return lst1;
    }
    return total_chars(lst1) == total_chars(lst2) ? lst1 : lst2;
}

int main() {
    cout << issame(total_match({"this"}, {}), {}) << endl;
    return 0;
}