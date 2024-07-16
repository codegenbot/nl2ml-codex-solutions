#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b);

vector<int> generate_integers(int a, int b){
    vector<int> result;
    for(int i = a; i <= b; ++i){
        if(i % 2 == 0){
            result.push_back(i);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    vector<int> vec1 = generate_integers(1, 10);
    vector<int> vec2 = generate_integers(1, 10);
    
    assert(issame(vec1, vec2) == true);
    
    return 0;
}