#include <vector>
using namespace std;

double vectorDistance(vector<float> v1, vector<float> v2) {
    if(v1.size() != v2.size()) {
        return -1.0;
    }
    
    double sum = 0.0;
    for(int i=0; i<v1.size(); i++) {
        sum += pow((v1[i] - v2[i]), 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    vector<float> v1(n);
    for(float &val : v1) {
        cin >> val;
    }
    cin >> n;
    vector<float> v2(n);
    for(float &val : v2) {
        cin >> val;
    }
    
    cout << setprecision(10) << fixed << vectorDistance(v1, v2) << endl;
    
    return 0;
}