vector<int> result;
    for(int num : x){
        bool has_even_digit = false;
        int temp = num;
        while(temp > 0){
            if ((temp % 10) % 2 == 0){
                has_even_digit = true;
                break;
            }
            temp /= 10;
        }
        if (!has_even_digit){
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}