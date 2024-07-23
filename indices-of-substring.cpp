#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int prevLast = -1;
    while ((last = text.find(target, prevLast + 1)) != string::npos) {
        indices.push_back(last);
        prevLast = last;
    }
    return indices;
}

int main() {
    string text;
    cin >> text;

    string target;
    int t;
    cin >> t;
    getline(cin, target);

    vector<int> indices = findIndices(text, target);
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}