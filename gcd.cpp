#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    while (start < text.length()) {
        size_t pos = text.find(target, start);
        if (pos != string::npos) {
            indices.push_back(pos);
            start = pos + target.length();
        } else {
            break;
        }
    }
    return indices;
}

int gcd(int a, int b) {
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;