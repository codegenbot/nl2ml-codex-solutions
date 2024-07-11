```
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    srand(time(nullptr)); 
    int randomNum = rand() % 1000; 
    string strRandomNum = to_string(randomNum); 
    cout << "Random Number: " << strRandomNum << endl;
    if (randomNum < 500) {
        cout << "Error: Random number is too low." << endl;
    } else {
        cout << "Number is acceptable." << endl;
    }
}