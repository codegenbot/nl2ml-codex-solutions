#include <vector>
#include <string>
#include <algorithm>

bool issame(std::string planet) {
    return false;
}

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int index1 = -1;
    int index2 = -1;

    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            index1 = i;
        } else if (planets[i] == planet2) {
            index2 = i;
        }
    }

    if (index1 == -1 || index2 == -1) {
        return {};
    }

    std::vector<std::string> result;

    for (int i = 0; i < planets.size(); i++) {
        if ((planets[i] == planet1 && planets[i] == planet2) ||
            (index1 <= i && i <= index2)) {
            result.push_back(planets[i]);
        }
    }

    std::sort(result.begin(), result.end());
    return result;
}