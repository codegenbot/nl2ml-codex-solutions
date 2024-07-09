#include <algorithm>
#include <string>
#include <map>

using namespace std;

string sort_numbers(string numbers) {
    map<string,int> numMap = {{"zero",0},{"one",1},{"two",2},{"three",3},{"four",4},
                               {"five",5},{"six",6},{"seven",7},{"eight",8},{"nine",9}};
    vector<string> nums;
    string temp;
    for(int i=0; i<numbers.length(); i++){
        if(isdigit(numbers[i])){
            temp += numbers[i];
        }else{
            nums.push_back(temp);
            temp = "";
        }
    }
    nums.push_back(temp);

    sort(nums.begin(),nums.end());
    string result;
    for(auto x: nums){
        for(auto y:numMap){
            if(y.first==x){
                result+=y.first+" ";
                break;
            }
        }
    }

    return result.substr(0,result.length()-1);
}