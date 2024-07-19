#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    long long sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum1 += v[i];
        } else {
            sum2 += v[i];
        }
    }
    
    int diff = abs(sum1 - sum2);
    res[0].push_back(v[0]);
    for (int i = 1; i < n; i++) {
        if (abs(sum1 - sum2) == abs(v[i] - sum2)) {
            res[0].push_back(v[i]);
        } else {
            break;
        }
    }
    
    int i = 0;
    while(i < n) { 
        int temp = i;
        sum2 -= v[temp];
        sum1 += v[temp];
        if (abs(sum1 - sum2) <= diff) {
            res[0].push_back(v[temp]);
        } else {
            res[1] = vector<int>(v.begin() + temp, v.end());
            break;
        }
        i++;
    }
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<vector<int>> res = cutVector(v);
    for (auto &v : res) {
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}