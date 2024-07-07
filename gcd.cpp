```c++
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int targetLength = target.length();
    for(int i = 0; i <= text.length() - targetLength; i++) {
        bool found = true;
        for(int j = 0; j < targetLength; j++) {
            if(text[i+j] != target[j]) {
                found = false;
                break;
            }
        }
        if(found) {
            indices.push_back(i);
            for(int k = i + targetLength; k <= text.length() - targetLength; k += targetLength) {
                found = true;
                for(int j = 0; j < targetLength; j++) {
                    if(text[k+j] != target[j]) {
                        found = false;
                        break;
                    }
                }
                if(found) {
                    indices.push_back(k);
                } else {
                    break;
                }
            }
        }
    }
    return indices;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
    
    // Add a base case:
    if (a == 0 && b == 0)
        return 0;
}

int main() {
    int a = 10;
    int b = 20;
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;
    return 0;
}