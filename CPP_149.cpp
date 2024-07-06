#include <vector>
#include <algorithm>

bool areEqual(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(areEqual(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"ccc", "dd", "aaaa", "bbbb"}));
    return 0;
}

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(), 
                     [](const string& a, const string& b){return (a.length() % 2 && b.length() % 2);});
    lst.erase(it, lst.end());
    sort(lst.begin(), lst.end(),
         [](const string& a, const string& b){
             if(a.length() != b.length())
                 return a.length() < b.length();
             else
                 return a < b;
         });
    return lst;
}