#include <cmath>
#include <cassert>

bool iscuber(int a){
    int i = 1;
    while (true) {
        if (pow(i, 3) == a)
            return true;
        else if (pow(i, 3) > a)
            return false;
        i++;
    }
}

int main() {
    assert(iscuber(1729) == false);
    return 0;
}