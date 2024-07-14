#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    vector<int> result;
    int n = vec.size();
    for (int i = n - 1; i >= 0; i--) {
        bool leader = true;
        for (int j = i + 1; j < n; j++) {
            if (vec[j] >= vec[i]) {
                leader = false;
                break;
            }
        }
        if (leader) {
            result.push_back(vec[i]);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}