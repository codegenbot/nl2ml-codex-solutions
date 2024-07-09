```cpp
#include <iostream>
#include <string>
using namespace std;

int starts_one_ends(int n);

int main() {
    int n = 0; 
    cout << "Enter a positive integer: ";
    cin >> n;
    int result = starts_one_ends(n);
    string output = to_string(result) + " numbers of " + to_string(n) + "-digit positive integers that start or end with 1";
    cout << output << endl;
    return 0;
}

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= pow(10, n-1); i++) {
        if ((i / pow(10, n-1)) % 10 == 1 || i % 10 == 1) {
            count++;
        }
    }
    return count;
}