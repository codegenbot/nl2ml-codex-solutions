```
#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a, vector<string>b) {
    return a == b;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<string> by_length(vector<int> arr) {
        vector<int> nums;
        for (int num : arr) {
            if (num >= 1 && num <= 9) {
                nums.push_back(num);
            }
        }
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());
        vector<string> result;
        for (int num : nums) {
            switch (num) {
                case 1:
                    result.push_back("One");
                    break;
                case 2:
                    result.push_back("Two");
                    break;
                case 3:
                    result.push_back("Three");
                    break;
                case 4:
                    result.push_back("Four");
                    break;
                case 5:
                    result.push_back("Five");
                    break;
                case 6:
                    result.push_back("Six");
                    break;
                case 7:
                    result.push_back("Seven");
                    break;
                case 8:
                    result.push_back("Eight");
                    break;
                case 9:
                    result.push_back("Nine");
                    break;
            }
        }
        return result;
    }

    vector<string> result = by_length(arr);
    
    bool answer = issame(result, {"One", "Four", "Seven"});
    if (answer) {
        cout << "issame";
    } else {
        cout << "not same";
    }
}