#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string text, target;
    cin >> text >> target;

    vector<int> indices;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        indices.push_back(pos);
        pos++;
    }

    for (int i = 0; i < indices.size(); ++i) {
        cout << indices[i] << " ";
    }

    return 0;
}