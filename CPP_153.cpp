Here is the completed code:

string Strongest_Extension(string class_name, vector<string> extensions) {
    int strongest_strength = 0;
    string strongest_extension;

    for (const auto& extension : extensions) {
        int cap = 0, sm = 0;
        for (char c : extension) {
            if (::isupper(c)) cap++;
            else if (::islower(c)) sm++;
        }
        double strength = static_cast<double>(cap - sm);

        if (strength > strongest_strength || (strength == strongest_strength && extension < strongest_extension)) {
            strongest_strength = static_cast<int>(strength);
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}