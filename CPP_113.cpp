vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (string s : lst) {
        int odd_count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                odd_count++;
            }
        }
        string temp = "the number of odd elements " + to_string(odd_count) + "n the str" + to_string(odd_count) + "ng " + s + " of the " + to_string(odd_count) + "nput."; 
        result.push_back(temp);
    }
    return result;
}