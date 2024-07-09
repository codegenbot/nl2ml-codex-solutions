vector<string> by_length(vector<int> arr) {
    vector<string> result;
    map<int, string> numberNames = {{1, "One"}, {2, "Two"}, {3, "Three"}, 
                                     {4, "Four"}, {5, "Five"}, {6, "Six"}, 
                                     {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            result.push_back(numberNames[num]);
        }
    }
    
    sort(result.begin(), result.end());
    
    reverse(result.begin(), result.end());
    
    return result;
}

bool issame(vector<string> a) {
    vector<int> arr = {1, 2, 3};
    vector<string> b = by_length(arr);
    return a == b;
}