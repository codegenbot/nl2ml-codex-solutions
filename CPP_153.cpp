#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cassert>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    int max_strength = INT_MIN;
    std::string strongest_extension = "";
    
    for(const std::string& ext : extensions){
        int CAP = 0, SM = 0;
        for(char c : ext){
            if(isupper(c)){
                CAP++;
            } else if(islower(c)){
                SM++;
            }
        }
        
        int strength = CAP - SM;
        if(strength > max_strength || (strength == max_strength && ext < strongest_extension)){
            max_strength = strength;
            strongest_extension = ext;
        }
    }
    
    return class_name + "." + strongest_extension;
}

```