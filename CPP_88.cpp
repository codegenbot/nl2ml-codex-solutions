vector<int> sort_array(vector<int> array){
    vector<int> sorted_array = array;
    if(sorted_array.size() == 0){
        return sorted_array;
    }
    if((sorted_array[0] + sorted_array[sorted_array.size()-1]) % 2 == 0){
        sort(sorted_array.begin(), sorted_array.end(), greater<int>());
    } else {
        sort(sorted_array.begin(), sorted_array.end());
    }
    return sorted_array;
}