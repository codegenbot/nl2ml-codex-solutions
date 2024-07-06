#include <string>
using namespace std;

bool is_nested(string str) {
    int open = 0, close = 0;
    
    for (char c : str) {
        if (c == '[')
            open++;
        else if (c == ']')
            close++;
        
        if (open <= close && open > 0)
            return true;
    }
    
    return false;
}