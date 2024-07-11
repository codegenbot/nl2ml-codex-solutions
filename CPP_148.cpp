#include <vector>
#include <string>
using std::string;

bool issame(const std::vector<string>& a, const std::vector<string>& b) {
    return a == b;
}

std::vector<string> bf(const string& planet1, const string& planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    int idx1 = -1, idx2 = -1;
    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) {
            idx1 = i;
        } else if (planets[i] == planet2) {
            idx2 = i;
        }
    }

    if (idx1 == -1 || idx2 == -1) {
        return result;
    }

    if (idx1 < idx2) {
        for (int i = idx1 + 1; i < idx2; ++i) {
            result.push_back(planets[i]);
        }
    } else {
        for (int i = idx2 + 1; i < idx1; ++i) {
            result.push_back(planets[i]);
        }
    }

    return result;
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), {}));
    return 0;
}