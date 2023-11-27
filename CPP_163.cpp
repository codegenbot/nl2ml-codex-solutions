#include <vector>

vector<int> generate_integers(int a, int b);

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    // Test the generate_integers function
    vector<int> res = generate_integers(1, 10);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;

    // Test the issame function
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    cout << issame(a, b) << endl;
    
    return 0;
}