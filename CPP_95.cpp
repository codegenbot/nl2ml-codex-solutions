if(dict.empty()) return false;

bool all_lower = true;
bool all_upper = true;

for(auto const& kv : dict){
    for(auto const& c : kv.first){
        if(!islower(c)){
            all_lower = false;
            break;
        }
    }
    for(auto const& c : kv.first){
        if(!isupper(c)){
            all_upper = false;
            break;
        }
    }
}

return all_lower || all_upper;
}