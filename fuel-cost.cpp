#include <iostream>
#include <vector>

int totalFuelCost(std::vector<int> fuelCosts) {
    int sum = 0;
    for (int cost : fuelCosts) {
        int newCost = static_cast<int>(cost / 3.0);
        sum += newCost - 2;
    }
    return sum;
}

int main() {
    std::vector<int> costs;
    int numCosts;
    std::cout << "Enter the number of fuel costs: ";
    std::cin >> numCosts;
    
    costs.resize(numCosts);
    
    for (int i = 0; i < numCosts; ++i) {
        std::cout << "Enter cost " << i + 1 << ": ";
        std::cin >> costs[i];
    }
    
    int result = totalFuelCost(costs);
    std::cout << "Total fuel cost: " << result << std::endl;
    return 0;
}