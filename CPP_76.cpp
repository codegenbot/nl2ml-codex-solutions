#include<stdio.h>
#include<math.h>
using namespace std;

bool is_simple_power(int x, int n) {
    double y = pow(n, log(x) / log(n));
    return (y == x);
}