#include <vector>
using namespace std;

pair<int, int> findPair(const vector<int>& numbers, int target) {
    unordered_map<int, int> numMap;
    for (int num : numbers) {
        int complement = target - num;
        if (numMap.find(complement) != numMap.end()) {
            return {complement, num};
        }
        numMap[num] = 1;
    }
    return {{0, 0}}; // Default pair in case no solution found
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    int target;
    cin >> target;
    pair<int, int> result = findPair(numbers, target);
    cout << result.first << " " << result.second << "\n";
    return 0;
}