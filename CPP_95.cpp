bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& pair : dict){
        string key = pair.first;
        
        if(!key.empty() && islower(key[0])){
            all_upper = false;
        } else if(!key.empty() && isupper(key[0])){
            all_lower = false;
        }
        
        if(!all_lower && !all_upper){
            return false;
        }
    }
    
    return true;
}