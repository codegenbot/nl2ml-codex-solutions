#include <algorithm>
int choose_num(int x, int int y){
    if(x > y) std::swap(x,y);
    for(int i = x; i <= y; i++){
        if(i % 2 == 0) return i;
    }
    return -1;
}