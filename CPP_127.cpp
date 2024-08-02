std::string intersection(vector<int> interval1, vector<int> interval2) {
    int start = std::max(interval1[0], interval2[0]);
    int end = std::min(interval1[1], interval2[1]);

    if (start > end) return "NO";
    
    int len = end - start + 1;
    bool isPrime = true;

    for (int i = 2; i * i <= len; i++) {
        if (len % i == 0) {
            isPrime = false;
            break;
        }
    }

    return std::to_string(isPrime);