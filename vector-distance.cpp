#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(vector<float> v1, vector<float> v2) {
    if(v1.size() != v2.size()) {
        return -1.0;  // or handle this case in any way you want
    }
    
    double sum = 0;
    for(int i = 0; i < v1.size(); i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n);
    for(float& val : v1) {
        cin >> val;
    }

    vector<float> v2(n);
    for(float& val : v2) {
        cin >> val;
    }

    cout << fixed << setprecision(10) << vectorDistance(v1, v2) << endl;

    return 0;
}