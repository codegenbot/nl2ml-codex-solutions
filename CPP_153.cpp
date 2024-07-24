Here is the completed code:

int Strongest_Extension(string class_name, vector<string> extensions) {
    int max_strength = 0;
    string strongest_extension;

    for (string extension : extensions) {
        int cap = 0, sm = 0;
        for (char c : extension) {
            if (isupper(c))
                cap++;
            else
                sm++;
        }
        int strength = cap - sm;
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = extension;
        } else if (strength == max_strength)
            strongest_extension = extension;
    }

    return class_name + "." + strongest_extension;
}