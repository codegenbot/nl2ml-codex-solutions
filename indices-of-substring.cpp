#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> indices;
    for (size_t i = 0; i < text.length(); ++i) {
        if (i + target.length() <= text.length() && text.substr(i, target.length()) == target) {
            indices.push_back(i);
        }
    }
    for (int index : indices) {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}