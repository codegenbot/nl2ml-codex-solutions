int Strongest_Extension(string class_name, vector<string> extensions) {
    int strongest = 0;
    string result = "";
    
    for (string extension : extensions) {
        int cap = 0, sm = 0;
        
        for (char c : extension) {
            if (isupper(c)) cap++;
            else if (islower(c)) sm++;
        }
        
        int strength = cap - sm;
        
        if (strength > strongest) {
            strongest = strength;
            result = extension;
        } 
    }
    
    return class_name + "." + result;
}