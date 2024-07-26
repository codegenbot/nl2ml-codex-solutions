#include <iostream>
#include <string>
#include <cassert>

bool simplify(const std::string& x, const std::string& n) {
    int x_num = std::stoi(x.substr(0, x.find('/')));
    int x_denom = std::stoi(x.substr(x.find('/') + 1));
    int n_num = std::stoi(n.substr(0, n.find('/')));
    int n_denom = std::stoi(n.substr(n.find('/') + 1));

    return (x_num * n_num) % (x_denom * n_denom) == 0;
}

int main() {
    assert(simplify("1/5", "1/5") == false);

    return 0;
}