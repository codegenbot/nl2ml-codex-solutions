```
#include <iostream>
#include <vector>
#include <map>

int search(std::vector<int> lst) {
    std::map<int, int> freq;
    for (int i : lst) {
        freq[i]++;
    }
    int prev = -1; 
    for (auto p = freq.begin(); p != freq.end(); ++p) {
        if (p->second >= p->first && p->first > prev) { 
            return p->first;
        }
        prev = p->first; 
    }
    return -1;
}

int main() {
    int n; 
    std::vector<int> lst;
    
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int val;
        std::cin >> val;
        lst.push_back(val);
    }
    
    int result = search(lst);
    std::cout << "Result: " << result << std::endl;
    
    return 0;
}