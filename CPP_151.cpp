double double_the_difference(const std::vector<float>& lst) {
    long long result = 0;
    for (float num : lst) {
        if (num > 0 && num == floor(num) && ((int)num) % 2 != 0) {
            result += (long long)pow(num, 2);
        }
    }
    return 2 * result;
}