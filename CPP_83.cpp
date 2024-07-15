#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if ((i == 1 || i % 10 == 1) && n >= 1)
            count++;
        for (int j = 1; j < i; j++) {
            int num = i * pow(10, n - 1) + j;
            if ((num / pow(10, n - 1)) % 10 == 1 || (num % 10) == 1)
                count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The count of numbers that start or end with 1 is: " << starts_one_ends(n);
    return 0;
}