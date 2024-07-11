vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    auto it1 = find(planets.begin(), planets.end(), planet1);
    auto it2 = find(planets.begin(), planets.end(), planet2);

    if (it1 == planets.end() || it2 == planets.end()) {
        return result;
    }

    int pos1 = distance(planets.begin(), it1);
    int pos2 = distance(planets.begin(), it2);

    int start = min(pos1, pos2) + 1;
    int end = max(pos1, pos2) - 1;

    for (int i = start; i <= end; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}