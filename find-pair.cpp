#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& numbers, int target) {
    unordered_map<int, int> numMap;
    
    for (int i = 0; i < numbers.size(); i++) {
        int complement = target - numbers[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, numbers[i]};
        }
        numMap[numbers[i]] = i;
    }
    
    return {-1, -1};  // Return default pair if no pair found
}

int main() {
    int n;
    cin >> n;
    
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    int target;
    cin >> target;
    
    auto result = findPair(numbers, target);
    if (result.first != -1) {
        cout << result.first << " " << result.second << endl;
    } else {
        cout << "No pair found" << endl;
    }
    
    return 0;
}