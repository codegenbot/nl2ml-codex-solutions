#include <vector>
#include <iostream>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int n = text.length();
    int m = target.length();

    for(int i=0; i<=n-m; i++) {
        bool found = true;
        for(int j=0; j<m; j++) {
            if(text[i+j] != target[j]) {
                found = false;
                break;
            }
        }
        if(found) indices.push_back(i);
    }

    return indices;
}

int main() {
    string text, target;
    cin >> text >> target;

    vector<int> result = findIndices(text, target);

    for(int i=0; i<result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}