#include <vector>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> result;
    
    int mercury = 57.9, venus = 67.2, earth = 0, mars = 225, 
        jupiter = 778, saturn = 1433, uranus = 2870, neptune = 4495;

    if (planet1 == "Mercury" && planet2 != "Mercury") {
        result.push_back(planet1);
    }
    else if (planet2 == "Mercury" && planet1 != "Mercury") {
        result.push_back(planet2);
    }
    else if (planet1 == "Venus" && planet2 != "Venus") {
        result.push_back(planet1);
    }
    else if (planet2 == "Venus" && planet1 != "Venus") {
        result.push_back(planet2);
    }
    else if (planet1 == "Earth" && planet2 != "Earth") {
        result.push_back(planet1);
    }
    else if (planet2 == "Earth" && planet1 != "Earth") {
        result.push_back(planet2);
    }
    else if (planet1 == "Mars" && planet2 != "Mars") {
        result.push_back(planet1);
    }
    else if (planet2 == "Mars" && planet1 != "Mars") {
        result.push_back(planet2);
    }
    else if (planet1 == "Jupiter" && planet2 != "Jupiter") {
        result.push_back(planet1);
    }
    else if (planet2 == "Jupiter" && planet1 != "Jupiter") {
        result.push_back(planet2);
    }
    else if (planet1 == "Saturn" && planet2 != "Saturn") {
        result.push_back(planet1);
    }
    else if (planet2 == "Saturn" && planet1 != "Saturn") {
        result.push_back(planet2);
    }
    else if (planet1 == "Uranus" && planet2 != "Uranus") {
        result.push_back(planet1);
    }
    else if (planet2 == "Uranus" && planet1 != "Uranus") {
        result.push_back(planet2);
    }
    else if (planet1 == "Neptune" && planet2 != "Neptune") {
        result.push_back(planet1);
    }
    else if (planet2 == "Neptune" && planet1 != "Neptune") {
        result.push_back(planet2);
    }

    return result;
}