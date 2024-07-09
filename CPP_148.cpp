#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> bf(const std::string& planet1, const std::string& planet2) {
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    std::vector<std::string> result;
    
    int start = -1, end = -1;
    for (size_t i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) {
            start = i;
        } else if (planets[i] == planet2) {
            end = i;
        }
    }
    
    if (start == -1 || end == -1) {
        return {};
    }
    
    if (start > end) {
        std::swap(start, end);
    }
    
    for (int i = start + 1; i < end; ++i) {
        result.push_back(planets[i]);
    }
    
    return result;
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), {}));
    
    return 0;
}