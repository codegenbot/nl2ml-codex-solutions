double shoppingTrip(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for(int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discountAmount = (price * (discounts[i] / 100.0));
        total += price - discountAmount;
    }
    return total;
}