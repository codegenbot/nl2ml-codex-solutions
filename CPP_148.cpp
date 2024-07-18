#include <string>
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    int index1 = -1;
    int index2 = -1;

    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            index1 = i;
        }
        if (planets[i] == planet2) {
            index2 = i;
        }
    }

    if (index1 == -1 || index2 == -1) {
        return result;
    }

    if (index1 < index2) {
        for (int i = index1 + 1; i < index2; i++) {
            result.push_back(planets[i]);
        }
    } else {
        for (int i = index2 + 1; i < index1; i++) {
            result.push_back(planets[i]);
        }
    }

    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), {}));
    return 0;
}