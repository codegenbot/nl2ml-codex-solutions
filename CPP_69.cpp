#include <iostream>
using namespace std;

int search(int n) {
    if(n < 0)
        return -1;
    else
        return n;
}

void runUserInput() {
    int num;
    cout << "Enter a positive integer (for example, 1, 2 or 3): ";
    cin >> num; 
    if (num >= 0) {
        cout << "The search function returns " << search(num) << " for the number " << num << "." << endl;
    } else {
        cout << "The search function returns -1 for negative numbers." << endl;
    }
}

int main() {
    runUserInput();
    assert(search(2) == -1); 
    return 0;
}