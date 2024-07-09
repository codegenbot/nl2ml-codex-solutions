bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> filtered_strings;
    for(const auto& str : strings){
        if(str.find(prefix) == 0){
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

int main(){
    assert (issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx") , {"xxx", "xxxAAA", "xxx"}));
    
    return 0;
}