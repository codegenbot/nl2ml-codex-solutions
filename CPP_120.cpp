#include <iostream>
#include <queue>
#include <vector>

using namespace std;

bool issame(int a, int b) {
    return a == b;
}

vector<int> maximum(vector<int> arr, int k) {
    priority_queue<int> pq;
    for (int i : arr) {
        pq.push(i);
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