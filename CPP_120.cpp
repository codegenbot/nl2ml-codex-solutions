#include <vector>
using namespace std;

bool issame(vector<int> a,vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    // use your maximum function here
    // assert statement as well
}