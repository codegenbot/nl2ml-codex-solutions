#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& vec, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < vec.size(); i++) {
        int complement = target - vec[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, vec[i]};
        }
        numMap[vec[i]] = i;
    }
    return {{-1, -1}}; // Return default pair if no solution found
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    int target;
    cin >> target;
    pair<int, int> result = findPair(vec, target);
    cout << result.first << " " << result.second << endl;
    return 0;
}