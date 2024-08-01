std::string longest(std::vector<std::string> strings){
    if(strings.empty()) return "";
    string result = strings[0];
    for(auto s : strings){
        if(s.length() > result.length()) result = s;
    }
    return result;
}