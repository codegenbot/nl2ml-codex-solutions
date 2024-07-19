```
#include <iostream>
#include <vector>

using namespace std;

bool same(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

bool isPalindrome(int n) {
    int rev = 0;
    int temp = n;
    while (temp != 0) {
        int remainder = temp % 10;
        rev = rev * 10 + remainder;
        temp /= 10;
    }
    return n == rev;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(isPalindrome(n) && (n % 2 == 0)) 
        cout << "The number is even and palindrome.\n";
    else
        cout << "The number is not even and palindrome.\n";
    return 0;
}