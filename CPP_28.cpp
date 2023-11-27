#include <string>
#include <vector>

std::string concatenate(std::vector<std::string> strings){
    std::string result = "";
    for (std::string s : strings) {
        result += s;
    }
    return result;
}

int main(){
    assert(concatenate({"x", "y", "z", "w", "k"}) == "xyzwk");
    return 0;
}