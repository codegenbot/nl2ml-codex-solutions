#include <iostream>
#include <vector>
#include <cassert>

bool triples_sum_to_zero(std::vector<int> l){
    for(int i=0; i<l.size()-2; i++){
        for(int j=i+1; j<l.size()-1; j++){
            for(int k=j+1; k<l.size(); k++){
                if(l[i]+l[j]+l[k] == 0){
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    assert (triples_sum_to_zero({100, 3, 5, -100}) == false);
    assert (triples_sum_to_zero({1, -4, 2, -2, 0}) == true);
    assert (triples_sum_to_zero({1, 2, 3, 4, 5}) == false);

    return 0;
}