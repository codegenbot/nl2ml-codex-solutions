```cpp
#include <vector>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.size();
    int m = target.size();

    for(int i = 0; i <= n - m; i++) {
        if(text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    string text = "hello world hello";
    string target = "hello";

    vector<int> indices = indicesOfSubstring(text, target);

    for (auto i : indices) {
        cout << i << endl;
    }

    return 0;
}