Here is the completed code:

vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result(2);
    int max_negative = 0;
    int min_positive = INT_MAX;

    for(int num : lst){
        if(num < 0 && num > max_negative){
            max_negative = num;
        }else if(num > 0 && num < min_positive){
            min_positive = num;
        }
    }

    result[0] = (max_negative == 0) ? 0 : max_negative;
    result[1] = (min_positive == INT_MAX) ? 0 : min_positive;

    return result;
}