```cpp
// Your code here...
bool correct_bracketing(string brackets) {
    int count = 0;
    for (char bracket : brackets) {
        if (bracket == '<') {
            count++;
        } else if (bracket == '>') {
            if (count > 0)
                count--;
            else
                return false; 
        }
    }
    return count == 0;
}