#include <string>

vector<string> total_match(vector<string> lst1, vector<string> lst2);

int total_chars(vector<string> lst) {
    int total = 0;
    for (string s : lst) {
        total += s.length();
    }
    return total;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (total_chars(lst1) < total_chars(lst2)) {
        return lst1;
    } else {
        return lst2;
    }
}