```cpp
#include <vector>
#include <string> // Add this line

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.size();
    int m = target.size();

    for(int i=0; i+n-m-1<n; ++i){
        bool found = true;
        for(int j=0; j<m; ++j){
            if(text[i+j] != target[j]){
                found = false;
                break;
            }
        }
        if(found) result.push_back(i);
    }

    return result;
}

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}