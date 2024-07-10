map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<int, string> rev_num_map;
for (auto it = num_map.begin(); it != num_map.end(); ++it) {
    rev_num_map[it->second] = it->first;
}

vector<int> sorted_nums;
istringstream iss(numbers);
string word;
while (iss >> word) {
    sorted_nums.push_back(num_map[word]);
}
sort(sorted_nums.begin(), sorted_nums.end());

string sorted_str;
for (int num : sorted_nums) {
    sorted_str += rev_num_map[num] + " ";
}
sorted_str.pop_back(); // Remove the extra space at the end
return sorted_str;
}