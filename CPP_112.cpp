Here is the completed code:

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (char i : s) {
        bool found = false;
        for (char j : c) {
            if (i == j) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += i;
        }
    }
    result.push_back(temp);
    string revTemp = temp;
    reverse(revTemp.begin(), revTemp.end());
    result.push_back((temp == revTemp) ? "True" : "False");
    return result;
}