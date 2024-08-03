```c++
void printCoins(int quarters, int nickles, int dimes, int pennies) {
    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;
}

int main() {
    int cents;

    cin >> cents;

    int penniesNeeded = cents;
    int nicklesNeeded = 0;
    int dimesNeeded = 0;
    int quartersNeeded = 0;

    while(penniesNeeded >= 25) {
        penniesNeeded -= 25;
        quartersNeeded++;
    }

    int remainingCents = penniesNeeded;
    while(remainingCents >= 10) {
        remainingCents -= 10;
        dimesNeeded++;
    }

    while(remainingCents >= 5) {
        remainingCents -= 5;
        nicklesNeeded++;
    }

    printCoins(quartersNeeded, nicklesNeeded + (remainingCents / 5), 
               dimesNeeded + ((remainingCents % 5) / 2), penniesNeeded);

    return 0;
}