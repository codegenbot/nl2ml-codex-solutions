#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> result;
    
    for(int i = 0; i < n-1; i++) {
        if(abs(vec[i] - vec[i+1]) > abs(vec[0] - vec.back())) {
            result.push_back({vector<int>(vec.begin(), vec.begin() + i+1)});
            break;
        }
    }
    
    // Add the remaining elements as another subvector
    result.push_back({vector<int>(vec.begin() + i, vec.end())});
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    vector<vector<int>> res = cutVector(vec);
    for(auto v : res) {
        for(auto x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    
    return 0;
}