Here is the solution:

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end(), 
         [](const string& a, const string& b) {
             if (a.size() == b.size()) {
                 return a < b;
             } else {
                 return a.size() < b.size();
             }
         });
    return result;