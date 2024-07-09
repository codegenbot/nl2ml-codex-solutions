int main() {
    vector<string> strings; // initialize your string vector here
    if(strings.empty()) {
        return "";
    } else {
        string longest = *max_element(strings.begin(), strings.end(),
            [](const string& a, const string& b) {return a.size() < b.size();});
        return longest;
    }
}