```cpp
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int index1 = -1, index2 = -1;
    
    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            index1 = i;
        } else if (planets[i] == planet2) {
            index2 = i;
        }
    }
    
    if (index1 == -1 || index2 == -1)
        return {};
    
    std::vector<std::string> result;
    for (int i = 0; i < planets.size(); i++) {
        if (i > index1 && i < index2) {
            result.push_back(planets[i]);
        }
    }
    
    return result;
}

int main() {
    assert(bf("Jupiter", "Makemake").empty()); 
}