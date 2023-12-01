#include <vector>

vector<int> make_a_pile(int n) {
    vector<int> levels;
    int stones = n;
    
    for (int i = 0; i < n; i++) {
        levels.push_back(stones);
        
        if (n % 2 == 0) {
            stones += 2;
        } else {
            stones += 1;
        }
    }
    
    return levels;
}