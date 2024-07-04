vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (const string& s : lst) {
        int odd_count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                odd_count++;
            }
        }
        string res = "the number of odd elements " + to_string(odd_count) + 
                     "n the str" + to_string(odd_count) + 
                     "ng " + to_string(odd_count) + " of the " + 
                     to_string(odd_count) + "nput.";
        result.push_back(res);
    }
    return result;
}