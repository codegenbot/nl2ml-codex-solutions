#include <iostream>
#include <vector>

using namespace std;

int pluck(const vector<int>& arr) {
    if (arr.empty()) return -1;
    
    int minEven = INT_MAX;
    int minIndex = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }
    
    return minIndex;
}

bool areEqual(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return false;
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    
    return true;
}

bool issame(const vector<int>& a, const vector<vector<int>>& b) {
    if (a.size() != b.size()) return false;
    
    for (int i = 0; i < a.size(); i++) {
        bool found = false;
        for (const auto& vec : b) {
            if (areEqual(a[i], vec)) {
                found = true;
                break;
            }
        }
        if (!found) return false;
    }
    
    return true;
}

int main() {
    assert(pluck({7, 9, 7, 1}) == -1 || issame({}, {{-1}}));
    return 0;
}