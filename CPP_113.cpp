bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (string s : lst) {
        int count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        string output = "the number of odd elements " + to_string(count) + " in the string '" + s + "' of the input.";
        result.push_back(output);
    }
    return result;
}