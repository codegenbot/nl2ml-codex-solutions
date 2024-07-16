#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums;
    string line;
    getline(cin, line);
    istringstream iss(line);
    int n;
    while (iss >> n) {
        nums.push_back(n);
    }

    long long sum = 0;
    for (int num : nums) {
        sum += (static_cast<long long>(num) / 3) - 2;
    }

    cout << sum << endl;

    return 0;
}