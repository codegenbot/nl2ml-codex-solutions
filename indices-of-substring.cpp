#include <iostream>
#include <vector>
using namespace std;

int main() {
    string text, target;
    cin >> text >> target;
    
    vector<int> indices;
    int pos;
    pos = text.find(target, 0);
    while(pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + target.length());
    }
    
    for(int i = 0; i < indices.size(); i++) {
        cout << indices[i] << " ";
    }
    
    return 0;
}