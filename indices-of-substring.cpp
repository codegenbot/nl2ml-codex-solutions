#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();
    for(int i=0; i<=n-m; i++) {
        if(text.substr(i,m) == target)
            result.push_back(i);
    }
    return result;
}

int main() {
    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target: ";
    getline(cin, target);
    vector<int> indices = indicesOfSubstring(text, target);
    for(int i=0; i<indices.size(); i++)
        cout << indices[i] << " ";
    return 0;
}