vector<int> tri(int n){
    vector<int> result;
    if(n >= 0){
        result.push_back(3);
        for(int i = 1; i <= n; ++i){
            if(i % 2 == 0){
                result.push_back(1 + i / 2);
            } else {
                result.push_back(result[i - 1] + result[i - 2] + result[i - 3]);
            }
        }
    }
    return result;
}