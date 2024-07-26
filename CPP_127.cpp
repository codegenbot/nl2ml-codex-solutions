#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

std::string intersection(std::vector<int> interval1, std::vector<int> interval2) {
    int start1 = interval1[0];
    int end1 = interval1[1];
    int start2 = interval2[0];
    int end2 = interval2[1];

    int intersectionStart = std::max(start1, start2);
    int intersectionEnd = std::min(end1, end2);

    if (intersectionStart > intersectionEnd) {
        return "NO";
    }

    int intersectionLength = intersectionEnd - intersectionStart;

    if (isPrime(intersectionLength)) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    assert(intersection({-2, -2}, {-3, -2}) == "NO");
    return 0;
}