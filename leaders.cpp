#include <vector>

std::vector<int> leaders(const std::vector<int>& vec) {
    int n = vec.size();
    vector<int> leaders;
    
    for(int i=n-1; i>=0; i--){
        bool leader = true;
        for(int j=i+1; j<n; j++){
            if(vec[i] < vec[j]){
                leader = false;
                break;
            }
        }
        if(leader) leaders.push_back(vec[i]);
    }
    
    return leaders;
}