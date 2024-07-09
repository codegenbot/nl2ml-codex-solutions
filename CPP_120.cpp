vector<int> maximum(vector<int> arr, int k) {
    priority_queue<int> pq;
    for (int x : arr) {
        pq.push(x);
        if (pq.size() > k) {
            pq.pop();
        }
    }
    vector<int> res(k);
    for (int i = k - 1; i >= 0; --i) {
        res[i] = pq.top();
        pq.pop();
    }
    return res;
}