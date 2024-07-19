#include <vector>
#include <string>
#include <cassert> // Add this include for using assert

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b; // Corrected function signature and definition
}

vector<string> bf(string planet1, string planet2){
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    int start = -1, end = -1;
    for(int i=0; i<planets.size(); i++){
        if(planets[i] == planet1){
            start = i;
        }
        if(planets[i] == planet2){
            end = i;
        }
    }

    if(start == -1 || end == -1){
        return result;
    }

    if(start > end){
        swap(start, end);
    }

    for(int i=start+1; i<end; i++){
        result.push_back(planets[i]);
    }

    return result;
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), {})); // Ensure bf and issame functions are used correctly
    return 0;
}