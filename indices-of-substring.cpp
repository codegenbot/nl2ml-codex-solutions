#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int last;
    int prevLast = -1;
    if ((last = text.find(target)) != string::npos) {
        indices.push_back(last);
        prevLast = last;
    } else if (text.find(target, 0) != string::npos) {
        prevLast = 1;
    }
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
    cin >> target;

    vector<int> indices = findIndices(text, target);
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}