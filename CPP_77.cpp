Here is the completed code:

```cpp
bool iscuber(int a){
    int i = 1;
    while (true) {
        if (pow(i, 3) == a)
            return true;
        else if (pow(i, 3) > a)
            return false;
        i++;
    }
}