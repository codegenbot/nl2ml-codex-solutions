```cpp
#include <iostream>
#include <vector>
#include <limits>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> get_odd_collatz(int n) {
    vector<int> res; 
    res.push_back(n); 
    while (n > 1) {
        if (n % 2 != 0) {
            res.push_back(n);
        }
        n = (n * 3 + 1);
    }
    if (n == 4)
        res.push_back(2);
    return res;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n <= 0) {
        cerr << "Error: Please enter a positive integer." << endl;
        return 1;
    }
    vector<int> res = get_odd_collatz(n);
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;
    if (!res.empty()) {
        if (issame(res, get_odd_collatz(1))) {
            cout << "The sequence is the same as Collatz Conjecture." << endl;
        } else {
            cout << "The sequence does not match Collatz Conjecture." << endl;
        }
    } else {
        cout << "The sequence does not match Collatz Conjecture." << endl;
    }
    return 0;
}