#include <iostream>
#include <string>
#include <vector>

int main() {
    int Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
        int max_strength = 0;
        std::string strongest_extension;
        
        for(auto extension : extensions){
            int cap = 0, sm = 0;
            
            for(char c : extension){
                if(isupper(c)) cap++;
                else if(islower(c)) sm++;
            }
            
            int strength = cap - sm;
            
            if(strength > max_strength){
                max_strength = strength;
                strongest_extension = extension;
            }
        }
        
        return class_name + "." + strongest_extension;
    }

    assert(Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    std::cout << Strongest_Extension("Sp", {"671235", "Bb"}) << std::endl;
    return 0;
}