bool issame(vector<string> a, vector<string>b) {
    return a == b;
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
        string str = "";
        switch (num) {
            case 1: str = "One"; break;
            case 2: str = "Two"; break;
            case 3: str = "Three"; break;
            case 4: str = "Four"; break;
            case 5: str = "Five"; break;
            case 6: str = "Six"; break;
            case 7: str = "Seven"; break;
            case 8: str = "Eight"; break;
            case 9: str = "Nine"; break;
        }
        result.push_back(str);
    }

    assert(issame(result, vector<string>{ "Nine", "Four", "Eight" }) && "Error at " << __LINE__);
    return result;
}