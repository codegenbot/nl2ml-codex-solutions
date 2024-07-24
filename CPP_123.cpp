#include <iostream>
#include <vector>
#include <limits>
#include <cassert>

using namespace std;

bool isSame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> getOddCollatz(int n) {
    vector<int> res; 
    res.push_back(n); 
    while (n > 1) {
        if (n % 2 == 0 && n != 1) {
            if (n / 2 > std::numeric_limits<int>::max() / 2) {
                cerr << "Error: The number exceeds the maximum value for an integer." << endl;
                return res; 
            }
            n = n / 2;
        } else {
            if ((n * 3 + 1) > std::numeric_limits<int>::max()) {
                cerr << "Error: The number exceeds the maximum value for an integer." << endl;
                return res;
            }
            res.push_back(n);
            n = (n * 3 + 1);
        }
    }
    return res;
}

void startProgram() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n <= 0) {
        cerr << "Error: Please enter a positive integer." << endl;
        return;
    }
    if (n > std::numeric_limits<int>::max() / 2) {
        cerr << "Error: The number exceeds the maximum value for an integer." << endl;
        return;
    }
    vector<int> res = getOddCollatz(n);
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;
    if (!res.empty()) {
        if (isSame(res, getOddCollatz(1))) {
            cout << "The sequence is the same as Collatz Conjecture." << endl;
        } else {
            cout << "The sequence does not match Collatz Conjecture." << endl;
        }
    } else {
        assert(isSame(getOddCollatz(1), {1}));
        cout << "The sequence does not match Collatz Conjecture." << endl;
    }
}

int main() {
    startProgram();
    return 0;
}