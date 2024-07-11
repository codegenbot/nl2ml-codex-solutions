bool issame(vector<int> a, vector<int> b);

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result = {0, 0};
    int largestNegative = INT_MIN;
    int smallestPositive = INT_MAX;
    
    for(int num : lst){
        if(num < 0 && num > largestNegative){
            largestNegative = num;
        }
        if(num > 0 && num < smallestPositive){
            smallestPositive = num;
        }
    }
    
    if(largestNegative != INT_MIN){
        result[0] = largestNegative;
    }
    if(smallestPositive != INT_MAX){
        result[1] = smallestPositive;
    }
    
    return result;
}