Here is the completed code:

```cpp
#include<string>
using namespace std;

bool prime_length(string str) {
    int len = str.length();
    for(int i=2; i*i<=len; i++) {
        if(len%i==0)
            return false;
    }
    return true;
}