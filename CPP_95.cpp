/*
Given a map, return true if all keys are strings in lower 
case or all keys are strings in upper case, else return false.
The function should return false is the given map is empty.
Examples:
check_map_case({{"a","apple"}, {"b","banana"}}) should return true.
check_map_case({{"a","apple"}, {"A","banana"}, {"B","banana"}}) should return false.
check_map_case({{"a","apple"}, {"8","banana"}, {"a","apple"}}) should return false.
check_map_case({{"Name","John"}, {"Age","36"}, {"City","Houston"}}) should return false.
check_map_case({{"STATE","NC"}, {"ZIP","12345"} }) should return true.
*/
#include<stdio.h>
#include<string>
#include<map>
using namespace std;
bool check_dict_case(map<string,string> dict){
    if(dict.size()==0)
        return false;
    bool is_upper=false;
    bool is_lower=false;
    for(auto i:dict){
        if(isupper(i.first[0]))
            is_upper=true;
        if(islower(i.first[0]))
            is_lower=true;
        if(is_upper&&is_lower)
            return false;
    }
    return true;
}
int main(){
    map<string,string> dict1={{"a","apple"}, {"b","banana"}};
    map<string,string> dict2={{"a","apple"}, {"A","banana"}, {"B","banana"}};
    map<string,string> dict3={{"a","apple"}, {"8","banana"}, {"a","apple"}};
    map<string,string> dict4={{"Name","John"}, {"Age","36"}, {"City","Houston"}};
    map<string,string> dict5={{"STATE","NC"}, {"ZIP","12345"}};
    printf("%d\n",check_dict_case(dict1));
    printf("%d\n",check_dict_case(dict2));
    printf("%d\n",check_dict_case(dict3));
    printf("%d\n",check_dict_case(dict4));
    printf("%d\n",check_dict_case(dict5));
    return 0;
}
