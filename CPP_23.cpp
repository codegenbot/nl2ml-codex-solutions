```cpp
#include <string>

int strLength(std::string str){
    return str.length();
}

int main() {
    assert(strLength("asdasnakj") == 13); 
    return 0;
}