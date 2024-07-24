int calculateFuelCost(vector<int> &numbers) {
    int total = 0;
    for (int num : numbers) {
        int result = (num / 3);
        if (result < 1) {
            result = 0;
        } else {
            result--;
        }
        total += result;
    }
    return total;
}