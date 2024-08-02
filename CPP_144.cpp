#include <string>

bool simplify(std::string x, std::string n) {
    int x_num = std::stoi(x.substr(0, x.find('/')));
    int x_den = std::stoi(x.substr(x.find('/') + 1));
    
    int n_num, n_den;
    
    n_num = stoi(n.substr(0, n.find('/')));
    n_den = stoi(n.substr(n.find('/') + 1));
    
    return (x_num * n_den) % (x_den * n_num) == 0;
}