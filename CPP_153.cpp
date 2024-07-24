#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

int Strongest_Extension(string class_name, vector<string> extensions) {
    int strongest = -1;
    string strongest_ext = "";
    for (const auto& ext : extensions) {
        int cap = 0, sm = 0;
        for (char c : ext) {
            if (isupper(c)) cap++;
            else if (islower(c)) sm++;
        }
        int strength = cap - sm;
        if (strength > strongest) {
            strongest = strength;
            strongest_ext = ext;
        } else if (strength == strongest) {
            if (find(extensions.begin(), extensions.end(), ext) < find(extensions.begin(), extensions.end(), strongest_ext)) {
                strongest_ext = ext;
            }
        }
    }
    return class_name + "." + strongest_ext;
}