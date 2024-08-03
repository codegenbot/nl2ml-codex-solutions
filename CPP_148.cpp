vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int idx1 = -1;
    int idx2 = -1;

    for (int i = 0; i < planets.size(); i++) {
        if (planet1 == planets[i]) {
            idx1 = i;
        } else if (planet2 == planets[i]) {
            idx2 = i;
        }
    }

    if (idx1 == -1 || idx2 == -1) {
        return {};
    }

    vector<string> result;

    for (int i = 0; i < planets.size(); i++) {
        if (i > idx1 && i < idx2) {
            result.push_back(planets[i]);
        }
    }

    return result;
}