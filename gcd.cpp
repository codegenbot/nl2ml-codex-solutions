#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(std::string text, std::string target) {
    vector<int> result;
    int targetLength = target.length();
    for(int i = 0; i <= text.length() - targetLength; i++) {
        bool match = true;
        for(int j = 0; j < targetLength; j++) {
            if(text[i+j] != target[j]) {
                match = false;
                break;
            }
        }
        if(match) result.push_back(i);
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