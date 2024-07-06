#include <string>

bool is_palindrome(std::string text){
    int i = 0, j = text.length() - 1;
    while(i < j){
        if(text[i] != text[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    assert(is_palindrome("xywzx") == false);
    // Your code here...
}