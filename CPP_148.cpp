vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int index1 = -1;
    int index2 = -1;

    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            index1 = i;
        } else if (planets[i] == planet2) {
            index2 = i;
        }
    }

    if (index1 == -1 || index2 == -1)
        return {};

    vector<string> result;

    for (int i = 0; i < planets.size(); i++) {
        if ((index1 > i && i > index2) || (index1 < i && i < index2))
            continue;
        else
            result.push_back(planets[i]);
    }

    return result;
}