#include <cassert>
#include <cstring>

int my_strlen(std::string str){
    return str.length();
}

int originalMain() {
    assert(my_strlen("asdasnakj") == 12);
    return 0;
}