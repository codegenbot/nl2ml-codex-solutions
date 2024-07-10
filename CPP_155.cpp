#include <vector>

bool issame(vector<int> v1, vector<int> v2) {
    return v1 == v2;
}

vector<int> even_odd_count(int num) {
    vector<int> counts(2, 0);
    string numStr = to_string(abs(num));
    for (char c : numStr) {
        if (c % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}

int main() {
    assert(issame(even_odd_count(123456), {3, 3}));
    return 0;
}