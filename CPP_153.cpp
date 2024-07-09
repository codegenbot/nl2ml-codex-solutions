string Strongest_Extension(string class_name, vector<string> extensions){
    int max_strength = -1000; 
    string strongest_extension = "";
    
    for (string ext : extensions) {
        int CAP = 0, SM = 0;
        for (char c : ext) {
            if (isupper(c)) CAP++;
            if (islower(c)) SM++;
        }
        int strength = CAP - SM;
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = ext;
        }
    }
    
    return class_name + "." + strongest_extension;
}