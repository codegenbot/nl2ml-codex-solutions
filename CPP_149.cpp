vector<string> sorted_list_sum(vector<string> lst) {
    // Create a new vector and copy strings with even lengths to it
    vector<string> result;
    for (const string& s : lst) {
        if (s.length() % 2 == 0) {
            result.push_back(s);
        }
    }

    // Sort the resulting vector by length and then alphabetically
    std::sort(result.begin(), result.end(),
              [](const string& a, const string& b) {
                  if (a.length() != b.length()) {
                      return a.length() < b.length();
                  } else {
                      return a < b;
                  }
              });

    return result;
}