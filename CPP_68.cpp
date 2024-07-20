Here is the completed code:

vector<int> pluck(vector<int> arr) {
    vector<pair<int, int>> evenNodes;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            evenNodes.emplace_back(arr[i], i);
        }
    }
    
    if (evenNodes.empty()) return {};
    
    auto minEvenNode = *min_element(evenNodes.begin(), evenNodes.end());
    return {{minEvenNode.first, minEvenNode.second}};
}