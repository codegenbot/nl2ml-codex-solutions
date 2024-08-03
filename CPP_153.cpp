```cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int Strongest_Extension(string class_name, vector<string> extensions){
    int strongest = 0;
    string strongest_extension;

    for (string extension : extensions) {
        int cap = 0, sm = 0;
        for (char c : extension) {
            if (isupper(c)) cap++;
            else if (islower(c)) sm++;
        }
        int strength = cap - sm;
        if (strength > strongest) {
            strongest = strength;
            strongest_extension = extension;
        } else if (strength == strongest) {
            if (find(extensions.begin(), extensions.end(), extension) < find(extensions.begin(), extensions.end(), strongest_extension))
                strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}

int main() {
    assert (Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    return 0;
}