#include <sstream>

int fruit_distribution(string s, int n) {
    int apples, oranges;
    sscanf(s.c_str(), "%d apples and %d oranges", &apples, &oranges);
    return n - apples - oranges;
}