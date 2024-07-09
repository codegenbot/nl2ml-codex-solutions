#include <vector>

bool is_same(std::vector<int> a, std::vector<int> b); 

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

std::vector<int> result = largest_smallest_integers({-6, -4, -4, -3, -100, 1});