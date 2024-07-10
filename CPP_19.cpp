map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<int, string> rev_num_map;

for (const auto& pair : num_map) {
    rev_num_map[pair.second] = pair.first;
}

stringstream ss(numbers);
string num;
vector<int> sorted_nums;

while (ss >> num) {
    sorted_nums.push_back(num_map[num]);
}

sort(sorted_nums.begin(), sorted_nums.end());

string result;
for (int num : sorted_nums) {
    result += rev_num_map[num] + " ";
}

return result;
}