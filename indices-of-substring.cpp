#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> result;
    for(int i = 0; i <= text.size() - target.size(); i++) {
        int j = 0;
        while(j < target.size()) {
            if(text[i + j] != target[j]) break;
            j++;
        }
        if(j == target.size()) result.push_back(i);
    }
    return result;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> indices = findIndices(text, target);
    for(int i : indices) cout << i << " ";
    return 0;
}