int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = (i / 3);
        temp = floor(temp);
        temp -= 2;
        sum += temp;
    }
    return sum;
}