vector<int> pluck(vector<int> arr) {
    vector<pair<int, int>> evenNodes;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            evenNodes.push_back({arr[i], i});
        }
    }

    if (evenNodes.empty()) {
        return {};
    }

    int smallestValue = evenNodes[0].first;
    int smallestIndex = evenNodes[0].second;

    for (int i = 1; i < evenNodes.size(); i++) {
        if (evenNodes[i].first < smallestValue) {
            smallestValue = evenNodes[i].first;
            smallestIndex = evenNodes[i].second;
        } else if (evenNodes[i].first == smallestValue) {
            smallestIndex = min(smallestIndex, evenNodes[i].second);
        }
    }

    return {{smallestValue, smallestIndex}};
}