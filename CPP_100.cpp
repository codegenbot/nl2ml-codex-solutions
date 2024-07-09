#include <iostream>
#include <vector>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            pile.push_back(i * 2 - 1);
        } else {
            pile.push_back(i * 2);
        }
    }
    return pile;
}

int main() {
    int n;
    cout << "Enter the number of levels: ";
    cin >> n;
    vector<int> result = make_a_pile(n);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}