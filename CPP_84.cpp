#include <iostream>
#include <string>

using namespace std;

int solve(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0)
            sum += i;
    }
    return sum;
}

int main() {
    int N;
    cin >> N;
    if(N < 1) {
        cout << "Error: Input should be a positive integer." << endl;
    } else {
        assert(to_string(solve(963)) == "10010");
        cout << to_string(solve(N)) << endl;
    }
    return 0;
}