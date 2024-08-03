#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    std::vector<std::string> result;
    int start = -1, end = -1;

    for (int i = 0; i < planets.size(); i++) {
        if (planet1 == planets[i]) {
            start = i;
        }
        if (planet2 == planets[i]) {
            end = i;
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
    assert(bf("Jupiter", "Makemake").empty());
    return 0;
}