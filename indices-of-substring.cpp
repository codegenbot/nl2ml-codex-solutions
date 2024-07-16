#include <vector>
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
    int n;
    cin >> n;
    string text;
    cin >> text;

    vector<int> result = findIndices(text, text);

    for(int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}