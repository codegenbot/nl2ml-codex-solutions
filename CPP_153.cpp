#include <iostream>
#include <string>
#include <vector>

int Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    int strongest = 0;
    std::string strongest_extension;
    for(auto extension : extensions){
        int cap = 0, sm = 0;
        for(char c : extension){
            if(isupper(c)) cap++;
            else if(islower(c)) sm++;
        }
        int strength = cap - sm;
        if(strength > strongest){
            strongest = strength;
            strongest_extension = extension;
        }
    }
    return class_name + "." + strongest_extension;
}