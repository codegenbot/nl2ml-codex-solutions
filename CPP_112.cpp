#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a,vector<string>b) {
    if(a.size() != b.size()) 
        return false;
    for(int i = 0; i < a.size(); i++) 
        if(a[i] != b[i])
            return false;
    return true;
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (char ch : s) {
        bool flag = false;
        for (char cc : c) {
            if (ch == cc) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            temp += ch;
        }
    }
    result.push_back(temp);
    string rev = temp;
    reverse(rev.begin(), rev.end());
    result.push_back((temp == rev) ? "True" : "False");
    return result;
}

int main() {
    assert(issame(equal("mamma", "mia") , {"", "True"}));
    return 0;
}