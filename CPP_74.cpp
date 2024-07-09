```cpp
#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b){
    if(a.size() != b.size()) 
        return false;
    for(int i = 0; i<a.size();i++) 
        if(a[i] != b[i])
            return false;
    return true;
}

int total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0;
    for (const string& s : lst1) {
        sum1 += s.length();
    }
    
    int sum2 = 0;
    for (const string& s : lst2) {
        sum2 += s.length();
    }

    if (issame(lst1, {}) && sum1 < sum2) {
        return lst1.size();
    } else if (issame(lst2, {}) && sum1 > sum2) {
        return lst2.size();
    } else if (sum1 == sum2) {
        return 0;
    } else {
        return -1;
    }
}