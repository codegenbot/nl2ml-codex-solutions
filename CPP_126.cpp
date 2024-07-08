```cpp
#include <vector>
using namespace std;

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
        int count = 0;
        for(int j = 0; j < lst.size(); j++){
            if(lst[j] == lst[i]){
                count++;
            }
        }
        if(count > 1){
            return false;
        }
    }
    return true;

int main() {
    // Your code here
    assert (is_sorted({1, 2, 3, 4}) == true);
    return 0;
}