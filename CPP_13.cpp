Here is the solution:

```cpp
int greatest_common_divisor(int a, int b){
    if (b == 0)
        return a;
    else
        return greatest_common_divisor(b, a % b);
}