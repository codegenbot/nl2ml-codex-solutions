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
	map<string,string>::iterator it;
	int count_lower=0;
	int count_upper=0;
	int count_number=0;
	int count_other=0;
	for(it=dict.begin();it!=dict.end();it++){
		if(isupper(it->first[0])){
			count_upper++;
		}else if(islower(it->first[0])){
			count_lower++;
		}else if(isdigit(it->first[0])){
			count_number++;
		}else{
			count_other++;
		}
	}
	if(count_lower>0 && count_upper>0){
		return false;
	}
	if(count_other>0 || count_number>0){
		return false;
	}
	return true;
}
