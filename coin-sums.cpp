int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents -= quarters * 25;

    int dimes = cents / 10;
    cents -= dimes * 10;

    int nickles = cents / 5;
    cents -= nickles * 5;

    int pennies = cents;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}