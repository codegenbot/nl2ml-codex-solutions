#include <vector>
using namespace std;

int solve(vector<int>& v) {
    int sum = 0;
    for (int i : v) {
        int temp = i / 3 - 2;
        sum += temp;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int& x : v) {
        cin >> x;
    }
    cout << solve(v) << endl;
    return 0;
}