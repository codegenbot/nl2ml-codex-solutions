#include <iostream>
#include <cassert>
#include <cstdlib>
#include <ctime>

int add(int x, int y) {
    return x + y;
}

int main() {
    srand(static_cast<unsigned>(time(NULL)));
    int x = rand() % 1000;
    int y = rand() % 1000;
    assert(add(x, y) == x + y);
    return 0;
}