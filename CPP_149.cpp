Here is the solution:

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;

    // Filter out strings with odd lengths
    for (const string& str : lst) {
        if (str.length() % 2 == 0)
            result.push_back(str);
    }

    // Sort the result vector by length and then alphabetically
    std::sort(result.begin(), result.end(),
              [](const string& a, const string& b) {
                  if (a.length() != b.length())
                      return a.length() < b.length();
                  else
                      return a < b;
              });

    return result;
}