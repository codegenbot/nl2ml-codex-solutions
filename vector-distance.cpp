#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(vector<float> v1, vector<float> v2) {
    double distance = 0;
    for(int i = 0; i < v1.size(); i++) {
        distance += pow(v1[i] - v2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;
    
    vector<float> vec1(n), vec2(n);
    
    for(int i = 0; i < n; i++) {
        cin >> vec1[i] >> vec2[i];
    }
    
    double dist = vectorDistance(vec1, vec2);
    
    cout << fixed << setprecision(10) << dist << endl;
    
    return 0;
}