#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

bool issame(vector<int> a, vector<int> b);

vector<int> filter_integers(std::list<boost::any> values){
    vector<int> result;
    for(auto val : values){
        if (val.type() == typeid(int)){
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    
    assert(issame(a, b));
    
    return 0;
}