#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

pair<int, int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = total > remaining ? remaining : total;
    int left = remaining - eaten;
    return make_pair(eaten, left);
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}