bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(const auto& pair : dict){
        for(char c : pair.first){
            if(isupper(c)){
                all_lower = false;
            } else if(islower(c)){
                all_upper = false;
            }
        }
    }
    
    return all_lower || all_upper;
}