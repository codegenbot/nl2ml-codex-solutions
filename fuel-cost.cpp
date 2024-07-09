```c++
int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = static_cast<int>(i / 3.0) - 2;
        if (temp < 0) {
            temp = 0;
        }
        sum += temp;
    }
    return sum; 
}