bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main(){
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    // Add more test cases if needed
    return 0;
}