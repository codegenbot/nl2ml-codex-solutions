#include <vector>

bool issame(const vector<int>& a, const vector<int>& b);

vector<int> incr_list(const vector<int>& l) {
    vector<int> result = l;
    for (int i = 0; i < result.size(); i++) {
        result[i]++;
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    // Add code here to test the functions if needed
    return 0;
}