Here is the completed code:

```cpp
#include <math.h>

using namespace std;

bool iscuber(int a) {
    int i = 1;
    while (pow(i, 3) <= a) {
        if (pow(i, 3) == a)
            return true;
        i++;
    }
    return false;
}