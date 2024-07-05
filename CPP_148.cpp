#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    auto it1 = find(planets.begin(), planets.end(), planet1);
    auto it2 = find(planets.begin(), planets.end(), planet2);

    if (it1 == planets.end() || it2 == planets.end()) {
        return result;
    }

    int idx1 = distance(planets.begin(), it1);
    int idx2 = distance(planets.begin(), it2);

    if (idx1 > idx2) {
        swap(idx1, idx2);
    }

    for (int i = idx1 + 1; i < idx2; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), {}));
    assert(issame(bf("Mars", "Venus"), {"Earth"}));
    cout << "All tests passed" << endl;
    return 0;
}