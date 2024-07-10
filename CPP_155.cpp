#include <vector>
using namespace std;

bool issame(vector<int> a,vector<int>b){
    return a == b;
}

vector<int> even_odd_count(int num) {
    vector<int> result(2, 0);
    string str = to_string(abs(num));
    for (char c : str) {
        int n = int(c - '0'); 
        if (n % 2 == 0)
            result[0]++;
        else
            result[1]++;
    }
    return result;
}

int main() {
    assert(even_odd_count(0) == {1, 0});
    return 0;
}