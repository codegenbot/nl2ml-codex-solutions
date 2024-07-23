#include <string>

int is_palindrome(std::string text){
    int start = 0;
    int end = text.length() - 1;

    while(start < end){
        if(text[start] != text[end])
            return 0;
        start++;
        end--;
    }

    return 1;
}

int main() {
    assert (is_palindrome("xywzx") == 0);
    // rest of your code
}