#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b);

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    std::vector<std::string> result;

    int start = -1, end = -1;
    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) {
            start = i;
        }
        if (planets[i] == planet2) {
            end = i;
        }
    }

    if (start == -1 || end == -1) {
        return result;
    }

    if (start > end) {
        std::swap(start, end);
    }

    for (int i = start + 1; i < end; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}