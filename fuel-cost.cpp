#include <vector>

int fuelCost(std::vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int newNum = static_cast<int>(std::floor((double)num / 3));
        if(newNum < 1) newNum = 0;
        else newNum--;
        sum += newNum;
    }
    return sum;
}