bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> order_by_points(const vector<int>& nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = 0, sum_b = 0;
        int temp_a = a, temp_b = b;
        if (temp_a < 0) temp_a = -temp_a;
        if (temp_b < 0) temp_b = -temp_b;
        while (temp_a > 0) {
            sum_a += temp_a % 10;
            temp_a /= 10;
        }
        while (temp_b > 0) {
            sum_b += temp_b % 10;
            temp_b /= 10;
        }
        if (sum_a == sum_b) {
            return a < b;
        }
        return sum_a < sum_b;
    });

    return nums;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));

    return 0;
}