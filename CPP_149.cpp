```cpp
vector<vector<string>> sorted_list_sum(vector<string> lst) {
    vector<vector<string>> result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0)
            result.push_back({str});
    }

    std::sort(result.begin(), result.end(),
              [](const vector<string>& a, const vector<string>& b) {
                  if (a.size() != b.size())
                      return a.size() - b.size();
                  else
                      return a[0] < b[0];
              });

    return result;
}

bool issame(vector<vector<string>> a, vector<vector<string>> b) {
    for (int i = 0; i < a.size() && i < b.size(); i++) {
        if (!issame(a[i], b[i]))
            return false;
    }
    return a.size() == b.size();
}

bool issame(vector<string> a, vector<string> b) {
    for (int i = 0; i < a.size() && i < b.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return a.size() == b.size();
}

vector<vector<string>> sorted_list_sum(vector<string> lst) {
    vector<vector<string>> result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0)
            result.push_back({str});
    }

    std::sort(result.begin(), result.end(),
              [](const vector<string>& a, const vector<string>& b) {
                  if (a.size() != b.size())
                      return a.size() - b.size();
                  else
                      return a[0] < b[0];
              });

    return result;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"ccc", "dd", "aaaa", "bbbb"}));
}