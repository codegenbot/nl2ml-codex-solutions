string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = "";
    int max_strength = INT_MIN;

    for (const auto& extension : extensions) {
        int CAP = 0, SM = 0;
        for (char c : extension) {
            if (isupper(c)) CAP++;
            else if (islower(c)) SM++;
        }
        int strength = CAP - SM;
        if (strength > max_strength || (strength == max_strength && extension < strongest_extension)) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}