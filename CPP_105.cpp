vector<string> by_length(vector<int> arr) {
    vector<int> nums;
    for (int num : arr) {
        if (num >= 1 && num <= 9)
            nums.push_back(num);
    }
    
    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());
    
    vector<string> names;
    for (int num : nums) {
        switch (num) {
            case 1: names.push_back("One"); break;
            case 2: names.push_back("Two"); break;
            case 3: names.push_back("Three"); break;
            case 4: names.push_back("Four"); break;
            case 5: names.push_back("Five"); break;
            case 6: names.push_back("Six"); break;
            case 7: names.push_back("Seven"); break;
            case 8: names.push_back("Eight"); break;
            case 9: names.push_back("Nine"); break;
        }
    }
    
    return names;
}