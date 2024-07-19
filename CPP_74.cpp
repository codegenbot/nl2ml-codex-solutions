#include <vector>

int total_chars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (total_chars(lst1) < total_chars(lst2)) {
        return lst1;
    } else {
        return lst2;
    }
}

int main() {
    assert (issame(total_match({"this"}, {}) , {}));
    return 0;
}