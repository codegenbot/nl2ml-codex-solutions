#include <vector>

using namespace std;

bool issame(std::vector<int> a, std::vector<int> b){
    return (a == b);
}

std::vector<int> largest_smallest_integers(std::vector<int> lst){
    int largest_negative = 0;
    int smallest_positive = 0;
    
    for(int num : lst){
        if(num < 0 && num < largest_negative){
            largest_negative = num;
        }
        if(num > 0 && (num < smallest_positive || smallest_positive == 0)){
            smallest_positive = num;
        }
    }
    
    return {largest_negative, smallest_positive};
}

int main(){
    auto result = largest_smallest_integers({-6, -4, -4, -3, -100, 1});
    bool same = issame(result, {0, 1});
    
    cout << same << endl;

    return 0;
}