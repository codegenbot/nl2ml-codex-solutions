#include <vector>
#include <cassert>

using namespace std;

vector<int> count_up_to(int n) {
    vector<int> primes;
    for (int num = 2; num <= n; ++num) {
        bool is_prime = true;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            primes.push_back(num);
        }
    }
    return primes;
}

int main() {
    vector<int> expected = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    vector<int> result = count_up_to(101);
    assert(result == expected);
    return 0;
}