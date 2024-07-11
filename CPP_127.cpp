#include <vector>
#include <string>
#include <cmath>

string intersection(vector<int> interval1, vector<int> interval2) {
    int start1 = interval1[0], end1 = interval1[1];
    int start2 = interval2[0], end2 = interval2[1];

    int intersectionStart = max(start1, start2);
    int intersectionEnd = min(end1, end2);

    if (intersectionStart > intersectionEnd) {
        return "NO";
    }

    int length = intersectionEnd - intersectionStart;

    if (isPrime(length)) {
        return "YES";
    } else {
        return "NO";
    }
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}