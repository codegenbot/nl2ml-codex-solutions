#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

string int_to_mini_roman(int number) {
    vector<int> nums = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> romans = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};

    string result = "";
    for (int i = 0; i < nums.size(); i++) {
        while (number >= nums[i]) {
            result += romans[i];
            number -= nums[i];
        }
    }

    return result;
}

int main() {
    assert(int_to_mini_roman(1000) == "m");

    cout << "All tests passed!" << endl;

    return 0;
}