bool issame(vector<string> a,vector<string>b){
    if(a.size() != b.size())return false;
    for(int i=0;i<a.size();i++){
        if(a[i] < b[i])return true;
        else if(a[i] > b[i])return false;
    }
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<int> nums;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            nums.push_back(i);
        }
    }

    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());

    vector<string> result;
    for (int num : nums) {
        string str = "";
        switch (num) {
            case 1:
                str = "One";
                break;
            case 2:
                str = "Two";
                break;
            case 3:
                str = "Three";
                break;
            case 4:
                str = "Four";
                break;
            case 5:
                str = "Five";
                break;
            case 6:
                str = "Six";
                break;
            case 7:
                str = "Seven";
                break;
            case 8:
                str = "Eight";
                break;
            case 9:
                str = "Nine";
                break;
        }
        result.push_back(str);
    }

    return result;
}