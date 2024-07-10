#include <vector>
#include <string>
using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    
    return true;
}