#include <vector>
using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> res;
    int n = v.size();
    for(int i=n-1; i>=0; --i){
        if(i == n - 1 || v[i] >= v[i+1])
            res.push_back(v[i]);
    }
    return res;
}