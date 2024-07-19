#include <map>
#include <string>

bool check_dict_case(std::map<std::string, std::string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& pair : dict){
        std::string key = pair.first;
        
        if(!key.empty() && islower(key[0])){
            all_upper = false;
        } else if(!key.empty() && isupper(key[0])){
            all_lower = false;
        }
    }
    
    return all_lower || all_upper;
}