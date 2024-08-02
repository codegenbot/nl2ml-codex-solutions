Here is the completed code:

```cpp
#include <iostream>
using namespace std;

string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            found_dot = true;
        }
        else if(!found_dot){
            if(file_name[i] < 'a' || file_name[i] > 'z') 
                if(file_name[i] < 'A' || file_name[i] > 'Z')
                    return "No";
        }
    }
    if(found_dot){
        string ext = file_name.substr(file_name.find('.')+1);
        if(ext != "txt" && ext != "exe" && ext != "dll") 
            return "No";
    }
    else return "No";
    return "Yes";
}

int main() {
    // Your code here
    return 0;
}