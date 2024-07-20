string longest(vector<string> strings){
    if(strings.empty()) return "";
    string longest = strings[0];
    for(auto str : strings){
        if(str.length() > longest.length()) longest = str;
    }
    return longest;
}