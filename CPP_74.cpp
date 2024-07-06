#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<string> a,vector<string> b){
    if(a.size() != b.size())
        return false;
    
    for(int i = 0 ;i<a.size();i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0;
    for (const string& s : lst1) {
        sum1 += s.length();
    }
    int sum2 = 0;
    for (const string& s : lst2) {
        sum2 += s.length();
    }
    
    if (sum1 < sum2)
        return lst1;
    else if (sum1 > sum2)
        return lst2;
    else
        if(issame(lst1,lst2))
            return lst1;
        else 
            return {};
}

int main() {
    vector<string> list1 = {"apple", "banana"};
    vector<string> list2 = {"appple", "banaa"};

    vector<string> result = total_match(list1, list2);
    
    for (const string& s : result) {
        cout << s << endl;
    }
    
    return 0;
}