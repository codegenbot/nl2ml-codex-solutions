#include <vector>
#include <string>
using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int totalChars1 = 0;
    int totalChars2 = 0;

    for (string s : lst1) {
        totalChars1 += s.length();
    }

    for (string s : lst2) {
        totalChars2 += s.length();
    }

    if (totalChars1 < totalChars2) {
        return lst1;
    }
    else {
        return lst2;
    }
}

bool issame(vector<string> a, vector<string> b) {
    // Function implementation here
}

int main() {
    assert(issame(total_match({ "this" }, {}), {}));
    
    return 0;
}