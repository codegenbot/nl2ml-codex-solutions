#include <vector>
#include <algorithm>

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x){
    std::vector<std::vector<int>> result;
    for(int i=0; i<lst.size(); i++){
        for(int j=0; j<lst[i].size(); j++){
            if(lst[i][j] == x){
                result.push_back({i, j});
            }
        }
    }
    std::sort(result.begin(), result.end(), [](const std::vector<int>& a, const std::vector<int>& b){
        return a[0] < b[0];
    });
    for(auto& row : result){
        std::sort(row.begin(), row.end(), std::greater<int>());
    }
    return result;
}

bool issame(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b){
    return a == b;
}

int main(){
    std::vector<std::vector<int>> result = get_row({{}, {1}, {1, 2, 3}}, 3);
    std::vector<std::vector<int>> expected = {{2, 2}};

    if(issame(result, expected)){
        std::cout << "Output is correct!" << std::endl;
    } else {
        std::cout << "Output is incorrect!" << std::endl;
    }

    return 0;
}