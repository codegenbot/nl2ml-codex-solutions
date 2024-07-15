#include <vector>

vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + need;
    int eatenCarrots = totalCarrots > remaining ? totalCarrots - remaining : totalCarrots;
    int leftCarrots = remaining > totalCarrots ? 0 : remaining - totalCarrots;
    
    return {eatenCarrots, leftCarrots};
}