int calculateFuelCost(vector<int> &costs) {
    int total = 0;
    for (int cost : costs) {
        int newCost = (cost / 3) - 2;
        total += newCost;
    }
    return total;
}