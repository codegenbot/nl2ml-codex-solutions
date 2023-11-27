#include <string>

bool simplify(std::string x, std::string n) {
    int x_num = stoi(x.substr(0, x.find('/')));
    int x_den = stoi(x.substr(x.find('/') + 1));
    int n_num = stoi(n.substr(0, n.find('/')));
    int n_den = stoi(n.substr(n.find('/') + 1));

    int product_num = x_num * n_num;
    int product_den = x_den * n_den;

    if (product_num % product_den == 0) {
        return true;
    } else {
        return false;
    }
}