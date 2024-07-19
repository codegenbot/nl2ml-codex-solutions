vector<int> pluck(vector<int> arr){
        vector<int> result = {};
        int smallestEven = INT_MAX;
        int smallestEvenIndex = -1;
        
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
                smallestEven = arr[i];
                smallestEvenIndex = i;
            }
        }
        
        if (smallestEven < INT_MAX) {
            result.push_back(smallestEven);
            result.push_back(smallestEvenIndex);
        }
        
        return result;
    }