string circular_shift(int x, int shift){
    string num_str = to_string(x);
    int n = num_str.size();
    shift %= n;
    if(shift == 0){
        return num_str;
    } else {
        string shifted_num = num_str.substr(n - shift) + num_str.substr(0, n - shift);
        return shifted_num;
    }
}