#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    
    int start = -1, end = -1;
    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) start = i;
        else if (planets[i] == planet2) end = i;
    }
    
    if (start == -1 || end == -1 || start >= end) return result;
    
    for (int i = start + 1; i < end; ++i) {
        result.push_back(planets[i]);
    }
    
    return result;
}

int main() {
    vector<string> expected_result = {"Mars", "Jupiter", "Saturn", "Uranus"};
    assert(bf("Jupiter", "Mars") == expected_result);
    
    return 0;
}