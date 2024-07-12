Here is the corrected code:

```cpp
#include <string>
#include <algorithm>

bool is_happy(std::string s){
    if(s.length() < 3) return false;
    for(int i = 0; i <= s.length()-3; i++){
        std::string sub = s.substr(i, 3);
        bool distinct = true;
        for(char c : sub){
            if(std::count(sub.begin(), sub.end(), c) > 1){
                distinct = false;
                break;
            }
        }
        if(!distinct) return false;
    }
    return true;

int main
{
    assert (is_happy("iopaxioi") == false );
    return 0;
}