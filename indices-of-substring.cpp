#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    while (start < text.length()) {
        size_t found = text.find(target, start);
        if (found == string::npos) break;
        indices.push_back(found);
        start = found + 1;
    }
    return indices;
}

int main() {
    // Read the input
    string text;
    int n;
    cin >> text >> n;

    vector<int> result = findIndices(text, text.substr(0, n));
    
    // Print the output
    for (auto x : result) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}