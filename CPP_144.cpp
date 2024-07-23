#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 1, b = 1, c = 1, d = 1;
    
    // Split the fractions into numerator and denominator
    size_t pos = x.find('/');
    a = stoi(x.substr(0, pos));
    b = stoi(x.substr(pos + 1));

    pos = n.find('/');
    c = stoi(n.substr(0, pos));
    d = stoi(n.substr(pos + 1));

    // Check if the product is an integer
    return (long long)a * c == (long long)b * d;
}