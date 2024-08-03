#include <vector>
#include <string>
#include <algorithm>
#include <cassert>
#include <iostream>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> find_planets_between(std::string planet1, std::string planet2) {
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    std::vector<std::string> result;
    int start = -1, end = -1;

    for (size_t i = 0; i < planets.size(); i++) {
        if (planet1 == planets[i]) {
            start = static_cast<int>(i);
        }
        if (planet2 == planets[i]) {
            end = static_cast<int>(i);
        }
    }

    if (start == -1 || end == -1) {
        return {};
    }

    if (start > end) {
        std::swap(start, end);
    }

    for (int i = start + 1; i < end; i++) {
        result.push_back(planets[i]);
    }

    return result;
}

int main() {
    assert(issame(find_planets_between("Jupiter", "Earth"), {"Mars", "Saturn"}));
    return 0;
}