bool issame(const string& a, const string& b){
    return a.length() == b.length();
}

vector<string> sorted_list_sum(vector<string>& lst){
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s){return s.length() % 2 != 0;}), lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b){
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}

int main(){
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}