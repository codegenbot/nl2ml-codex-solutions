```cpp
int eat(int number, int need, int remaining) {
    int total = number + need;
    int left = min(remaining, need);
    return max(0, remaining - left);
}