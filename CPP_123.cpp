vector<int> result;
    while (n != 1) {
        if (n % 2 == 1) {  // Odd number
            result.push_back(n);
        }
        if (n % 2 == 0) {  // Even number
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1);
    sort(result.begin(), result.end());
    return result;