string longest(vector<string> strings){
    if(strings.empty())
        return "None";
    
    string longestStr = strings[0];
    for(int i = 1; i < strings.size(); ++i){
        if(strings[i].size() > longestStr.size() ||
          (strings[i].size() == longestStr.size() && strings[i] < longestStr)){
            longestStr = strings[i];
        }
    }
    return longestStr;
}