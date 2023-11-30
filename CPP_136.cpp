vector<int> largest_smallest_integers(vector<int> lst){
    int largest_negative = 0;
    int smallest_positive = 0;
    
    for(int num : lst){
        if(num < 0){
            if(num < largest_negative){
                largest_negative = num;
            }
        }
        else if(num > 0){
            if(smallest_positive == 0 || num < smallest_positive){
                smallest_positive = num;
            }
        }
    }
    
    return {largest_negative, smallest_positive};
}