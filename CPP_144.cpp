#include <string>

bool simplify(std::string x, std::string n) {
    // Extracting numerator and denominator from x
    int x_num = stoi(x.substr(0, x.find('/')));
    int x_den = stoi(x.substr(x.find('/') + 1));

    // Extracting numerator and denominator from n
    int n_num = stoi(n.substr(0, n.find('/')));
    int n_den = stoi(n.substr(n.find('/') + 1));

    // Calculating the product of x and n
    int product_num = x_num * n_num;
    int product_den = x_den * n_den;

    // Checking if the product is a whole number
    if (product_den % product_num == 0) {
        return true;
    } else {
        return false;
    }
}