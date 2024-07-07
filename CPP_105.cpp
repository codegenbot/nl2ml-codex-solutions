vector<string> by_length(vector<int> arr) {
    vector<int> toSort;
    for (int num : arr) {
        if (num >= 1 && num <= 9)
            toSort.push_back(num);
    }
    sort(toSort.begin(), toSort.end());
    vector<string> result;
    for (int num : toSort) {
        string name = "";
        switch (num) {
            case 1: name = "One"; break;
            case 2: name = "Two"; break;
            case 3: name = "Three"; break;
            case 4: name = "Four"; break;
            case 5: name = "Five"; break;
            case 6: name = "Six"; break;
            case 7: name = "Seven"; break;
            case 8: name = "Eight"; break;
            case 9: name = "Nine"; break;
        }
        result.push_back(name);
    }
    reverse(result.begin(), result.end());
    return result;
}