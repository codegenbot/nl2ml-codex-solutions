vector<string> by_length(vector<int> arr){
    vector<string> result;
    vector<int> sortedArr;
    map<int, string> digitMap = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};

    // Sort the integers that are between 1 and 9 inclusive
    for(int num : arr){
        if(num >= 1 && num <= 9){
            sortedArr.push_back(num);
        }
    }
    sort(sortedArr.begin(), sortedArr.end());

    // Reverse the resulting vector and replace each digit by its corresponding name
    reverse(sortedArr.begin(), sortedArr.end());
    for(int num : sortedArr){
        result.push_back(digitMap[num]);
    }

    return result;
}