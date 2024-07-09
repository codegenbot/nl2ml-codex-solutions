string decimal_to_binary(int n) {
    string binary = "";
    while (n > 0) {
        if (n % 2 == 0)
            binary = "0" + binary;
        else
            binary = "1" + binary;
        n /= 2;
    }
    return "db" + binary + "db";
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    cout << "Binary representation of " << decimal << " is " << decimal_to_binary(decimal) << endl;
    return 0;
}