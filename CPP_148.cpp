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

    int start_idx = min(idx1, idx2);
    int end_idx = max(idx1, idx2);

    for (int i = start_idx + 1; i < end_idx; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}