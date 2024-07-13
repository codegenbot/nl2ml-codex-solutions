Here's the completed code:

```cpp
#include <vector>
#include <algorithm>

using namespace std;

bool is_sorted(vector<int> lst) {
    if (lst.size() <= 1)
        return true;
    
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] >= lst[i - 1])
            continue;
        else if (count(lst.begin(), lst.end(), lst[i]) > 1)
            return false;
        else
            break;
    }
    
    return true;
}