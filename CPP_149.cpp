```cpp
#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> sorted_list_sum(vector<string> lst) {
    // Remove strings with odd lengths from the vector
    lst.erase(std::remove_if(lst.begin(), lst.end(),
        [](const string& s) { return s.length() % 2 != 0; }),
      lst.end());

    // Sort the vector based on length and then alphabetically
    std::sort(lst.begin(), lst.end(),
      [](const string& a, const string& b) {
          if (a.length() == b.length()) {
              return a < b;
          }
          return a.length() < b.length();
      });

    return lst;
}