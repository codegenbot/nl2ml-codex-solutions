#include <vector>
using namespace std;

bool issame(vector<string> a,vector<string>b){
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    
    int index1 = -1, index2 = -1;
    
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
        if ((i > index1 && i < index2) || (i > index2 && i < index1)) {
            result.push_back(planets[i]);
        }
    }
    
    return result;
}

int main() {
    assert (issame(bf("Jupiter", "Makemake") , {}));
    return 0;
}