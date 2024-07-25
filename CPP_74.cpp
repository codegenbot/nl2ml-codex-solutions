int total_chars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}

bool issame(vector<string> a, vector<string> b){
    return total_chars(a) == total_chars(b);
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (total_chars(lst1) < total_chars(lst2)) {
        return lst1;
    }
    return lst2;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}