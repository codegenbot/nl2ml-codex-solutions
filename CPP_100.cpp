#include <iostream>
#include <vector>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            stones += 2;
        else
            stones++;
        pile.push_back(stones);
    }
    return pile;
}