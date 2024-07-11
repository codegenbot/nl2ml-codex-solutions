bool issame(vector<string> a, vector<vector<string>> b) {
    if (a.size() != b.size()) 
        return false;

    for (int i = 0; i < a.size(); i++) {
        bool found = false;
        for (const auto& v : b) {
            if (v[0] == a[i]) {
                found = true;
                break;
            }
        }
        if (!found)
            return false;
    }
    return true;
}

vector<vector<string>> sorted_list_sum(vector<string> lst) {
    vector<vector<string>> result;

    // Remove strings with odd lengths from the list
    for (const auto& str : lst) {
        if (str.length() % 2 == 0)
            result.push_back({{str}});
    }

    // Sort the resulted lists by length and then alphabetically
    std::sort(result.begin(), result.end(),
              [](const vector<string>& a, const vector<string>& b) {
                  if (a.size() != b.size())
                      return a.size() - b.size();
                  else
                      return a[0][0] < b[0][0];
              });

    return result;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"ccc", "dd", "aaaa", "bbbb"}));
}