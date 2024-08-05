#include <vector>
using namespace std;

int can_arrange(vector<int> arr){
    int largestIndex = -1;
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] < arr[i-1]){
            largestIndex = i - 1;
        }
    }
    return largestIndex;
}

int main(){
    assert(can_arrange({}) == -1);
    return 0;
}