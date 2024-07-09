#include <vector>
#include <string>
#include <cctype>
#include <initializer_list>
#include <cassert>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions);

int main() {
    std::vector<std::string> extensions;
    extensions.push_back("671235");
    extensions.push_back("Bb");
    assert(Strongest_Extension(class_name, extensions) == "Sp.671235");
    return 0;
}

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    int max_strength = 0;
    std::string strongest_extension;

    for(auto extension : extensions){
        int cap = 0, sm = 0;
        for(char c : extension){
            if(isupper(c)) cap++;
            else if(islower(c)) sm++;
        }
        int strength = cap - sm;
        if(strength > max_strength || (strength == max_strength && extension < strongest_extension)){
            max_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}