#include <vector>
#include <string>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(string(1, ch));
        }
    }
    string temp = "";
    for (int i = 0; i < result.size(); i++) {
        temp += result[i];
    }
    reverse(temp);
    if (issame(s, temp)) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}

string reverse(string s) {
    string rev = "";
    for (int i = s.size() - 1; i >= 0; i--) {
        rev += s[i];
    }
    return rev;
}

bool issame(string a, string b) {
    if(a.size()!=b.size())
        return false;
    bool flag=true;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])
            flag=false;
    }
    return flag;
}