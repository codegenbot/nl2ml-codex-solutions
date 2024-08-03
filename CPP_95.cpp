bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& pair : dict){
        string key = pair.first;
        
        if(key.empty() || key.find_first_not_of('abcdefghijklmnopqrstuvwxyz') != string::npos){
            return false;
        }
        
        if(!all_lower && !all_upper) return false;
        
        if(key == tolower(key)){
            all_upper = false;
        } else if(key == toupper(key)){
            all_lower = false;
        } else {
            return false;
        }
    }
    
    return true;
}