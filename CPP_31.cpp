```cpp
#include <iostream>
using namespace std;

bool is_prime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    int num = stoi(s);
    if (is_prime(num))
        cout << "true" << endl;
}