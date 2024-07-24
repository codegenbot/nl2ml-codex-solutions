#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    
    for (const string& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    
    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (a.length() == b.length()) {
                 return a < b;
             } else {
                 return a.length() < b.length();
             }
         });
    
    return result;
}