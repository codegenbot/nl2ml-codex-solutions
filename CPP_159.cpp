vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + need;
    int carrotsLeft = remaining - need;
    if (carrotsLeft < 0) {
        totalEaten += carrotsLeft; // subtract the negative value to adjust totalEaten
        carrotsLeft = 0;
    }
    return {totalEaten, carrotsLeft};
}