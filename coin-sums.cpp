#include <vector>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int pennies = cents / 1;
    int nickles = (cents % 100) / 25;
    int dimes = ((cents % 100) % 25) / 10;
    int quarters = (((cents % 100) % 25) % 10) / 5;
    
    cout << pennies << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << quarters << endl;

    return 0;
}