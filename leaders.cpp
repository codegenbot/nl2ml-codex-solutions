Here is the modified code:

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int lastLeader = arr.back();
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= lastLeader) {
            lastLeader = arr[i];
            result.push_back(lastLeader);
        }
    }
    return result;