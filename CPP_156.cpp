string int_to_mini_romank(int number){
    vector<string> roman{"i", "iv", "v", "ix", "x", "xl", "l", "xc", "c", "cd", "d", "cm", "m"};
    vector<int> value{1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string result = "";
    int i = 12;
    while(number > 0){
        int div = number / value[i];
        number %= value[i];
        while(div--){
            result += roman[i];
        }
        i--;
    }
    return result;
}