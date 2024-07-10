bool simplify(std::string x, std::string n) {
    int num1 = stoi(x.substr(0, x.find('/')));
    int den1 = stoi(x.substr(x.find('/') + 1));
    int num2 = stoi(n.substr(0, n.find('/')));
    int den2 = stoi(n.substr(n.find('/') + 1));

    if (den1 == 0 || den2 == 0) {
        return false; // Return false if any denominator is 0
    }

    int gcd = std::gcd(num1 * den2, num2 * den1);
    num1 /= gcd;
    den1 /= gcd;
    num2 /= gcd;
    den2 /= gcd;

    return num1 == num2 && den1 == den2;
}