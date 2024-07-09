#include <string>
#include <vector>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) return "NO";
    }
    int oddCount = 0;
    for (int num : lst2) {
        if (num % 2 != 0) oddCount++;
    }
    return oddCount == 0 ? "YES" : "NO";
}