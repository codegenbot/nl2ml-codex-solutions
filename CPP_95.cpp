#include <iostream>
#include <map>
#include <string>
#include <cctype>

using namespace std;

bool check_dict_case(map<string, string> dict){
    if(dict.empty()) return false;

    bool all_lowercase = true;
    bool all_uppercase = true;

    for(auto const& pair : dict){
        for(char c : pair.first){
            if(islower(c)){
                all_uppercase = false;
            } else if(isupper(c)){
                all_lowercase = false;
            }
        }
    }

    return all_lowercase || all_uppercase;
}