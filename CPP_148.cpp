vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int index1 = -1, index2 = -1;
    
    for (int i = 0; i < planets.size(); i++) {
        if (planet1 == planets[i]) {
            index1 = i;
        } else if (planet2 == planets[i]) {
            index2 = i;
        }
        
        if (index1 != -1 && index2 != -1) {
            break;
        }
    }
    
    if (index1 == -1 || index2 == -1) {
        return {};
    }
    
    vector<string> result;
    for (int i = 0; i < planets.size(); i++) {
        if (i > index1 && i < index2) {
            result.push_back(planets[i]);
        } else if (index1 > i && i > index2) {
            result.push_back(planets[i]);
        }
    }
    
    return result;
}

bool issame(vector<string> a, vector<string>b){
    return a == b;
}