#include <string>
#include <vector>
#include <cassert>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    std::string strongest_extension = "";
    int max_strength = INT_MIN;

    for (std::string extension : extensions) {
        int cap_count = 0;
        int sm_count = 0;

        for (char ch : extension) {
            if (isupper(ch)) {
                cap_count++;
            } else if (islower(ch)) {
                sm_count++;
            }
        }

        int strength = cap_count - sm_count;
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}