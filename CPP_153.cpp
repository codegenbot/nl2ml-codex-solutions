string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = extensions[0];
    int max_strength = count_uppercase(strongest_extension) - count_lowercase(strongest_extension);
    
    for (int i = 1; i < extensions.size(); i++) {
        int strength = count_uppercase(extensions[i]) - count_lowercase(extensions[i]);
        if (strength > max_strength) {
            strongest_extension = extensions[i];
            max_strength = strength;
        }
    }
    
    return class_name + "." + strongest_extension;
}