#include <vector>
#include <cstdlib>
#include <cassert>

using namespace std;

vector<int> incr_list(vector<int> l){
    vector<int> result;
    for(int i=0; i<l.size(); i++){
        result.push_back(l[i]+1);
    }
    return result;
}

int main() {
    // Write your own test cases here
    
    return EXIT_SUCCESS;
}