#include <cmath>
bool iscuber(int a){
    int i = 1;
    while (true) {
        if (std::pow(i, 3) == a) return true;
        if (i * i > a) return false;
        i++;
    }
}