string intersection(vector<int> interval1, vector<int> interval2) {
    int start1 = interval1[0];
    int end1 = interval1[1];
    int start2 = interval2[0];
    int end2 = interval2[1];
    
    // Check if the intervals intersect
    if (end1 < start2 || end2 < start1) {
        return "NO";
    }
    
    // Calculate the length of the intersection
    int intersectionLength = min(end1, end2) - max(start1, start2) + 1;
    
    // Check if the length of the intersection is a prime number
    if (isPrime(intersectionLength)) {
        return "YES";
    } else {
        return "NO";
    }
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}