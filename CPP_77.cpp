Here is the completed code:

bool iscuber(int a){
    int n = round(cbrt(a));
    return (n*n*n) == a;
}