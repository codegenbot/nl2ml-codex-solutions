map<string, int> number_map = {
    {"zero", 0},
    {"one", 1},
    {"two", 2},
    {"three", 3},
    {"four", 4},
    {"five", 5},
    {"six", 6},
    {"seven", 7},
    {"eight", 8},
    {"nine", 9}
};

string sort_numbers(string numbers){
    string result = "";
    vector<int> nums;
    
    stringstream ss(numbers);
    string token;
    while (ss >> token) {
        nums.push_back(number_map[token]);
    }
    
    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < nums.size(); i++) {
        for (auto it : number_map) {
            if (it.second == nums[i]) {
                result += it.first + " ";
                break;
            }
        }
    }
    
    result.pop_back(); // Remove extra space at the end
    return result;
}