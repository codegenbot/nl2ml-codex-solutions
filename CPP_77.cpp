#include <cmath>

bool iscuber(int a){
    int cubeRoot = round(cbrt(a));
    return cubeRoot * cubeRoot * cubeRoot == a;
}