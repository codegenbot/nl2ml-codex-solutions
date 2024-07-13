#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = 0, dimes = 0, nickles = 0, pennies = 0;

    while(cents > 0) {
        if (cents >= 25) {
            quarters++;
            cents -= 25;
        }
        else if (cents >= 10) {
            dimes++;
            cents -= 10;
        }
        else if (cents >= 5) {
            nickles++;
            cents -= 5;
        }
        else {
            pennies = cents;
            cents = 0; // exit the loop
        }
    }

    pennies = cents; 

    cout << quarters << endl; 
    cout << dimes << endl;   
    cout << nickles << endl;      
    cout << pennies << endl;     

    return 0;
}