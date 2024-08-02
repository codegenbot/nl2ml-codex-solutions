#include <string>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

int isPrime(int n);

string intersection(vector<int> interval1, vector<int> interval2) {
    int start1 = interval1[0], end1 = interval1[1];
    int start2 = interval2[0], end2 = interval2[1];

    int intersection_start = max(start1, start2);
    int intersection_end = min(end1, end2);

    if (intersection_start > intersection_end) {
        return "NO";
    }

    int intersection_length = intersection_end - intersection_start;

    if (isPrime(intersection_length)) {
        return "YES";
    } else {
        return "NO";
    }
}

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}