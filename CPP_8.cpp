vector<int> sum_product(vector<int> numbers) {
    int sum = 0;
    long long product = 1;

    for (int number : numbers) {
        sum += number;
        product *= number;
    }

    return {sum, product};
}