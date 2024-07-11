Here is the solution:

vector<int> even_odd_count(int num) {
    int even = 0, odd = 0;
    string str = to_string(abs(num));
    for (char c : str) {
        if (stoi(c) % 2 == 0)
            even++;
        else
            odd++;
    }
    return {even, odd};
}