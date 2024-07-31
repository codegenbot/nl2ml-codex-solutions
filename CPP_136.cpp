vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result(2, 0);
    int largest_negative = 0;
    int smallest_positive = 0;
    
    for(int num : lst){
        if(num < 0){
            if(num < largest_negative){
                largest_negative = num;
            }
        } else if(num > 0){
            if(smallest_positive == 0 || num < smallest_positive){
                smallest_positive = num;
            }
        }
    }
    
    result[0] = largest_negative;
    result[1] = smallest_positive;
    
    return result;
}