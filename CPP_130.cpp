vector<int> tri(int n){
    vector<int> result;
    if(n >= 0){
        for(int i = 0; i <= n; i++){
            if(i == 0){
                result.push_back(3);
            } else if(i == 1){
                result.push_back(1);
            } else if(i == 2){
                result.push_back(1 + (i / 2));
            } else if(i % 2 == 0){
                result.push_back(1 + i / 2);
            } else {
                result.push_back(result[i - 1] + result[i - 2] + result[i + 1]);
            }
        }
    }
    return result;
}