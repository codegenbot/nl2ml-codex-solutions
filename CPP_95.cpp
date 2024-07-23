if(dict.empty()) return false;
    bool all_lower = true;
    bool all_upper = true;
    for(auto const& pair : dict){
        for(auto const& c : pair.first){
            if(islower(c)){
                all_upper = false;
            } else if(isupper(c)){
                all_lower = false;
            }
            if(!all_lower && !all_upper){
                return false;
            }
        }
    }
    return true;
}