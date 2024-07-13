```cpp
#include <iostream>
#include <string>
#include <vector>
#include <cctype>

int Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    int strongest = 0;
    std::string strongest_extension;
    for(auto extension : extensions){
        int cap = 0, sm = 0;
        for(char c : extension){
            if(std::isupper(c)) cap++;
            else if(std::islower(c)) sm++;
        }
        int strength = cap - sm;
        if(strength > strongest || (strength == strongest && extension < strongest_extension)){
            strongest = strength;
            strongest_extension = extension;
        }
    }
    return class_name + "." + strongest_extension;
}

int main() {
    assert(Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    return 0;
}