int Strongest_Extension(string class_name, vector<string> extensions) {
    int strongest = -1;
    string strongest_ext;

    for (string ext : extensions) {
        int cap = 0;
        int sm = 0;

        for (char c : ext) {
            if (isupper(c)) {
                cap++;
            } else if (islower(c)) {
                sm++;
            }
        }

        int strength = cap - sm;

        if (strength > strongest) {
            strongest = strength;
            strongest_ext = ext;
        }
    }

    return class_name + "." + strongest_ext;
}