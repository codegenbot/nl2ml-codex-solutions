int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }

    int n = nums.size();
    int left_sum = 0, right_sum = 0;
    for (int i = 0; i < n; ++i) {
        right_sum += nums[i];
    }

    int min_diff = abs(left_sum - right_sum);
    int cut_index = -1;

    for (int i = 0; i < n; ++i) {
        left_sum += nums[i];
        right_sum -= nums[i];
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    for (int i = 0; i <= cut_index; ++i) {
        cout << nums[i] << endl;
    }
    for (int i = cut_index + 1; i < n; ++i) {
        cout << nums[i] << endl;
    }

    return 0;
}