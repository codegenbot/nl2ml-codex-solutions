#include <vector>
using namespace std;

int solution(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        sum += (num / 3 - 2);
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    cout << solution(numbers) << endl;
    return 0;
}