vector<string> bf(string planet1, string planet2){
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    int index1 = -1, index2 = -1;
    
    for (int i = 0; i < planets.size(); ++i){
        if (planet1 == planets[i]) {
            index1 = i;
        }
        if (planet2 == planets[i]) {
            index2 = i;
        }
    }
    
    if (index1 == -1 || index2 == -1) {
        return result;
    }
    
    if (index1 < index2) {
        for (int i = index1 + 1; i < index2; ++i) {
            result.push_back(planets[i]);
        }
    } else {
        for (int i = index2 + 1; i < index1; ++i) {
            result.push_back(planets[i]);
        }
    }
    
    return result;
}