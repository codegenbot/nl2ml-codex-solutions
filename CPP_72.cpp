bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != reverse(str).s) return false; // check if it's balanced

    int sum = 0;
    for (int i : q) {
        sum += i;
    }

    return sum <= w; // check if the sum is less than or equal to the maximum possible weight
}