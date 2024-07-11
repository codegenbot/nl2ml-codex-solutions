
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string text, target;
    cin >> text >> target;

    vector<int> indices;
    size_t pos = 0;

    while ((pos != string::npos && pos < text.length()) && (pos = text.find(target, pos)) != string::npos) {
        indices.push_back(pos);
        pos += target.length();
    }

    for (int i : indices) {
        cout << i << " ";
    }

    return 0;
}