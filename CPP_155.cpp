```cpp
#include <vector>
#include <cassert>
using namespace std;

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> even_odd_count(int num) {
    vector<int> result;
    int count = 0;
    while(num != 0) {
        int digit = num % 10;
        if(digit % 2 == 0)
            count++;
        num /= 10;
    }
    result.push_back(count);
    result.push_back(abs(num));
    return result;
}

int main() {
    assert(issame(even_odd_count(0), vector<int>{1,0}));
    int num;
    cout << "Enter a number: ";
    cin >> num;
    vector<int> res = even_odd_count(num);
    if(res[0] > 0) 
        cout << "Even numbers are: " << res[0] << endl;
    else
        cout << "No even numbers." << endl;

    if(res[1] != 0) 
        cout << "Odd number is: " << res[1] << endl;
    else
        cout << "No odd number." << endl;
}