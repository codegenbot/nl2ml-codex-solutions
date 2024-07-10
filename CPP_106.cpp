#include <vector>
bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size())
        return false;
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    
    return true;
}
int main(){
    // Example usage of issame function
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {1, 2, 3};

    if(issame(vec1, vec2))
        std::cout << "Vectors are the same" << std::endl;
    else
        std::cout << "Vectors are different" << std::endl;

    return 0;
}