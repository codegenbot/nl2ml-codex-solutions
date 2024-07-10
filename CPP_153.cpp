int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest = 0, max_strength = 0;
    string strongest_extension;

    for (const auto& extension : extensions) {
        int cap = 0, sm = 0;
        for (char c : extension) {
            if (isupper(c)) cap++;
            else if (islower(c)) sm++;
        }
        int strength = cap - sm;
        if (strength > max_strength) {
            strongest = 1;
            max_strength = strength;
            strongest_extension = extension;
        } else if (strength == max_strength) strongest++;
    }

    return class_name + "." + strongest_extension;
}