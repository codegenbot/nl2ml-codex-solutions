# include <iostream>
# include <vector>
# include <string>

using namespace std;

int main() {
    string text, target;
    getline(cin, text);
    text = text.substr(0, text.size() - 1); // Remove newline character
    getline(cin, target);
    
    vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    
    for (int i = 0; i < indices.size(); ++i) {
        cout << indices[i] << " ";
    }
    
    return 0;
}