bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    assert(issame(filter_by_prefix({"hello", "world", "helicopter"}, "hel"), filter_by_prefix({"hello", "world", "goodbye"}, "hel")) == true);
    return 0;
}