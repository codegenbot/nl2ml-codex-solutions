Here is the solution:

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    if (total > remaining) {
        return {total, 0};
    } else {
        return {total, remaining - need};
    }
}