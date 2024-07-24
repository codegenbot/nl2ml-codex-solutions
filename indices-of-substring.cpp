#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int prevLast = 0;
    int last;
    while ((last = text.find(target, prevLast)) != string::npos) {
        indices.push_back(last + 1 - (text.find(target, 0) == 0 ? 1 : 0));
        prevLast = last + 1;
    }
    return indices;
}

int main() {
    string text;
    cin >> text;

    string target;
    cin >> target;

    vector<int> indices = findIndices(text, target);
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}