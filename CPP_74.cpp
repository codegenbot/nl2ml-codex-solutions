bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0, sum2 = 0;
    for (string s : lst1) {
        sum1 += s.size();
    }
    for (string s : lst2) {
        sum2 += s.size();
    }
    if (sum1 < sum2) {
        return lst1;
    } else {
        return lst2;
    }
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}