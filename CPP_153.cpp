string Strongest_Extension(string class_name, vector<string> extensions) {
    int strongest_strength = 0;
    string strongest_extension;

    for (const auto& extension : extensions) {
        int cap = 0;
        int sm = 0;

        for (char c : extension) {
            if (isupper(c))
                cap++;
            else
                sm++;
        }

        int strength = cap - sm;

        if (strength > strongest_strength) {
            strongest_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}