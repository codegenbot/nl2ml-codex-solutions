vector<int> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if(arr.empty()) return {};

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0) {
            bool found = false;
            for(pair<int, int> p : result) {
                if(p.first == arr[i]) {
                    found = true;
                    break;
                }
            }
            if(!found) {
                result.push_back({arr[i], i});
            }
        }
    }

    if(result.empty()) return {};
    sort(result.begin(), result.end());
    return {{result[0].first, result[0].second}};
}