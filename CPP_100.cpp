vector<int> levels;
    int stones = n;
    levels.push_back(stones);

    for(int i = 1; i < n; i++){
        if(stones % 2 == 0){
            stones += 2;
        }
        else{
            stones += 1;
        }
        levels.push_back(stones);
    }

    return levels;