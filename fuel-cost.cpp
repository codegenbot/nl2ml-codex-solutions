Here is the solution:

int fuelCost(vector<int> prices) {
    int total = 0;
    for (int price : prices) {
        int newPrice = (price / 3) - 2;
        total += newPrice;
    }
    return total;
}