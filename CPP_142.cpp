int sum_squares(vector<int> lst){
    int sum = 0;
    for(int i = 0; i < lst.size(); i++){
        if(i % 3 == 0 && i % 4 != 0) // index is a multiple of 3 and not a multiple of 4
            sum += pow(lst[i], 2);
        else if(i % 4 == 0 && i % 3 != 0) // index is a multiple of 4 and not a multiple of 3
            sum += pow(lst[i], 3);
    }
    return sum;
}