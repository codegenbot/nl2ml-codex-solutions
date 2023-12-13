```
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Strongest_Extension(string class_name, vector<string> extensions) {
    int max_strength = 0;
    string strongest_extension;
    for (int i = 0; i < extensions.size(); i++) {
        int strength = 0;
        for (int j = 0; j < extensions[i].length(); j++) {
            if (isupper(extensions[i][j])) {
                strength++;
            } else if (islower(extensions[i][j])) {
                strength--;
            }
        }
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = extensions[i];
        }
    }
    cout << class_name + "." + strongest_extension << endl;
}

int main() {
    Strongest_Extension("Sp", {"671235", "Bb"});
    return 0;
}
```