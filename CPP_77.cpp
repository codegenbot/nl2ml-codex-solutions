bool iscuber(int a){
    int i = 1;
    while (true) {
        if(pow(i,3) == a) return true;
        if(pow(i,3)>a) break;
        i++;
    }
    return false;
}