#include <vector>
#include <list>
#include <any>
#include <cassert>

using namespace std;

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for(auto val : values){
        if(val.type() == typeid(int)){
            result.push_back(any_cast<int>(val));
        }
    }
    return result;
}

bool is_same(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(is_same(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}