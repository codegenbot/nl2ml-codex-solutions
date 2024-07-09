using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions){
    string strongest = "";
    int max_strength = 0;
    
    for (const auto& extension : extensions) {
        int cap = 0, sm = 0;
        for (char c : extension) {
            if (isupper(c)) cap++;
            else if (islower(c)) sm++;
        }
        int strength = cap - sm;
        
        if (strength > max_strength || (strength == max_strength && extension < strongest)) {
            strongest = extension;
            max_strength = strength;
        }
    }
    
    return class_name + "." + strongest;
}