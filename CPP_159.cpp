int totalEaten = number + min(need, remaining);
    int carrotsLeft = max(0, remaining - need);
    return {totalEaten, carrotsLeft};
}