```cpp
#include <cstdlib>
#include <ctime>

int add(int x, int y) {
    return x + y;
}

int main() {
    srand(time(0));
    int x = rand() % 1000;
    return 0;
}