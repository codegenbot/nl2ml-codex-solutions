Here is the completed code:

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found)
            result += ch;
    }
    vector<string> res(2);
    res[0] = result;
    res[1] = result;
    reverse(res[0].begin(), res[0].end());
    res[1] = (result == res[0]) ? "True" : "False";
    return res;
}