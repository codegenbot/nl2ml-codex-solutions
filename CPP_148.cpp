#include <vector>
#include <algorithm>
#include <string>

bool issame(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int index1 = -1;
    int index2 = -1;

    for (int i = 0; i < planets.size(); i++) {
        if (planet1 == planets[i]) {
            index1 = i;
        }
        else if (planet2 == planets[i]) {
            index2 = i;
        }
    }

    if (index1 == -1 || index2 == -1) {
        return false;
    }

    int start = min(index1, index2);
    int end = max(index1, index2);

    for (int i = 0; i < planets.size(); i++) {
        if ((i >= start && i <= end) != issame(planets[i], planet1)) {
            return false;
        }
    }

    return true;
}

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int index1 = -1;
    int index2 = -1;

    for (int i = 0; i < planets.size(); i++) {
        if (planet1 == planets[i]) {
            index1 = i;
        }
        else if (planet2 == planets[i]) {
            index2 = i;
        }
    }

    if (index1 == -1 || index2 == -1) {
        return {};
    }

    int start = min(index1, index2);
    int end = max(index1, index2);

    vector<string> result;
    for (int i = 0; i < planets.size(); i++) {
        if (i >= start && i <= end) {
            result.push_back(planets[i]);
        }
    }

    return result;
}