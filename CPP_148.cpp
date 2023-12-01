#include <iostream>
#include <vector>
#include <algorithm>
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

    int start = min(index1, index2);
    int end = max(index1, index2);

    for (int i = start + 1; i < end; i++) {
        result.push_back(planets[i]);
    }

    return result;
}


bool issame(vector<string> a, vector<string> b) {
    // compare a and b and return true if they are the same, else return false
}


int main() {
    assert(bf("Jupiter", "Makemake") == vector<string>{});
    return 0;
}