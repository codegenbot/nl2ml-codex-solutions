int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        double temp = std::floor((double)i / 3.0 - 2.0);
        if (temp < 0) {
            temp = 0;
        }
        sum += temp;
    }
    return sum;