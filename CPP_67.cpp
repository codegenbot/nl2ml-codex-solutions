#include <string>
#include <cstdio>

int fruit_distribution(std::string s, int n){ 
    int apples, oranges; 
    sscanf(s.c_str(), "%d apples and %d oranges", &apples, &oranges); 
    return n - apples - oranges;
}