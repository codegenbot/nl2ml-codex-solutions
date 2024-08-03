#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size())
        return false;
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    
    return true;
}

vector<int> maximum(vector<int> arr, int k) {
    priority_queue<int> pq;
    for (int num : arr) {
        pq.push(num);
    }
    vector<int> result;
    for (int i = 0; i < k; i++) {
        result.push_back(pq.top());
        pq.pop();
    }
    return result;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0) , {}));
    return 0;
}