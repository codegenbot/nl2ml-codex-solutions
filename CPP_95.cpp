#include <map>
#include <string>
#include <cassert>

using namespace std;

bool check_dict_case(map<std::string, std::string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& pair : dict){
        string key = pair.first;
        
        if(!key.empty() && std::islower(key[0])){
            all_upper = false;
        } else if(!key.empty() && std::isupper(key[0])){
            all_lower = false;
        }
    }
    
    return all_lower || all_upper;
}