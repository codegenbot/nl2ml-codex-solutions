#include <string>

int fruit_distribution(std::string s, int n){
    int apples = 0, oranges = 0;
    std::sscanf(s.c_str(), "%d apples and %d oranges", &apples, &oranges);
    return n - apples - oranges;
}