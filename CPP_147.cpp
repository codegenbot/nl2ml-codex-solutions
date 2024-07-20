int get_matrix_triples(int n) {
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        int val = i * i - i + 1;
        if (val % 3 == 0) {
            count += i - 1;
        }
    }
    return count;
}

int main() {
    // Your main function code here
    return 0;
}