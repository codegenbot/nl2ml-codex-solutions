#include <iostream>
using namespace std;

void checkNumber(int n) {
    if(n % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
}

int main() {
    int n;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    cin >> n; 
    if (!(cin)) {
        cerr << "Invalid input. Please enter an integer." << endl;
    } else {
        checkNumber(n); 
    }
}