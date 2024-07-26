vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + need;
    int eatenCarrots = (totalCarrots <= remaining) ? totalCarrots : remaining;
    int carrotsLeft = (remaining >= totalCarrots) ? remaining - totalCarrots : 0;
    
    return {eatenCarrots, carrotsLeft};
}