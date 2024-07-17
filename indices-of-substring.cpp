#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i=0; i<=n-m; i++){
        if(text.substr(i,m) == target){
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> res = indicesOfSubstring(text, target);
    for(int num : res)
        cout << num << " ";
    return 0;
}