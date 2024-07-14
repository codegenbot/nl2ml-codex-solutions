Here is the modified code:

```cpp
#include <vector>
#include <string> 
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int index = 0;
    while (index <= text.length() - target.length()) {
        if (text.substr(index, target.length()).compare(target) == 0) {
            indices.push_back(index);
            index += target.length();
        } else {
            index++;
        }
    }
    return indices;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}