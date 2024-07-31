#include <string>
using namespace std;

bool simplify(string x, string n) {
    int x_num = std::stoi(x.substr(0, x.find('/')));
    int x_den = std::stoi(x.substr(x.find('/') + 1));
    int n_num = std::stoi(n.substr(0, n.find('/')));
    int n_den = std::stoi(n.substr(n.find('/') + 1));

    return (x_num * n_num) % (x_den * n_den) == 0;
}