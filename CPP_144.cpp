bool simplify(string x, string n) {
    // Extracting numerators and denominators from strings
    int x_num = stoi(x.substr(0, x.find('/')));
    int x_den = stoi(x.substr(x.find('/') + 1));
    int n_num = stoi(n.substr(0, n.find('/')));
    int n_den = stoi(n.substr(n.find('/') + 1));

    // Checking if x * n evaluates to a whole number
    if ((x_num * n_num) % (x_den * n_den) == 0) {
        return true;
    } else {
        return false;
    }
}