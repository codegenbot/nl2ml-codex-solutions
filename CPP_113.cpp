vector<string> odd_count(vector<string> lst){
    vector<string> res;
    for (string s : lst) {
        int count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        string str = "the number of odd elements " + to_string(count) + "n the str" + to_string(count) + "ng " + s + " of the " + to_string(count) + "nput.";
        res.push_back(str);
    }
    return res;
}