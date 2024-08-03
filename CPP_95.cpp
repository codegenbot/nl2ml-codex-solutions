bool check_dict_case(map<string,string> dict){
    if(dict.empty())
        return false;
    bool all_lower = true;
    bool all_upper = true;
    for(auto const& pair : dict){
        string key = pair.first;
        bool is_lower = true;
        bool is_upper = true;
        for(char c : key){
            if(!islower(c)){
                is_lower = false;
            }
            if(!isupper(c)){
                is_upper = false;
            }
        }
        if(!is_lower && !is_upper){
            return false;
        }
        if(is_lower){
            all_upper = false;
        }
        if(is_upper){
            all_lower = false;
        }
    }
    return all_lower || all_upper;
}