#include <string>
#include <cassert>

bool cycpattern_check(const std::string& a, const std::string& b) {
    size_t n = a.size();
    size_t m = b.size();
    if(n != m) return false;
    
    // Double the string 'a'
    std::string doubleA = a + a;
    
    return (doubleA.find(b) != std::string::npos);
}

int main() {
    assert(cycpattern_check("winemtt","tinem") == true);
    
    return 0;
}