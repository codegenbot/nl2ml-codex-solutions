#include <cassert>
#include <string>

std::string string_xor(std::string a, std::string b); 

std::string string_xor(std::string a, std::string b) {
    std::string result;
    for(int i=0; i<a.size(); i++){
        if(a[i] == b[i]){
            result += "0";
        } else {
            result += "1";
        }
    }
    return result;
}

int main() {
    assert(string_xor("0101", "0000") == "0101");
    return 0;
}