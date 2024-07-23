#include <string>
#include <vector>
#include <cassert>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    int max_strength = INT_MIN;
    std::string strongest_extension = "";
    
    for(const std::string& ext : extensions){
        int cap_count = 0, sm_count = 0;
        for(char c : ext){
            if(isupper(c)) cap_count++;
            if(islower(c)) sm_count++;
        }
        int strength = cap_count - sm_count;
        if(strength > max_strength){
            max_strength = strength;
            strongest_extension = ext;
        }
    }
    
    return class_name + "." + strongest_extension;
}

int main() {
    assert(Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    return 0;
}