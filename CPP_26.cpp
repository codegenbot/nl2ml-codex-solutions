#include <vector>
#include <algorithm>

using namespace std;

vector<int> remove_duplicates(vector<int> numbers){
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

bool issame(vector<int> a, vector<int> b){
    // Your comparison logic here
}