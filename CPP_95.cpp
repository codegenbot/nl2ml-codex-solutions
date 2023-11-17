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
	bool flag=true;
	map<string,string>::iterator it;
	for(it=dict.begin();it!=dict.end();it++){
		if(it->first[0]>='a'&&it->first[0]<='z'){
			for(int i=1;i<it->first.length();i++){
				if(it->first[i]<'a'||it->first[i]>'z'){
					flag=false;
					break;
				}
			}
		}
		else if(it->first[0]>='A'&&it->first[0]<='Z'){
			for(int i=1;i<it->first.length();i++){
				if(it->first[i]<'A'||it->first[i]>'Z'){
					flag=false;
					break;
				}
			}
		}
		else{
			flag=false;
			break;
		}
	}
	return flag;
}
int main(){
	map<string,string> dict;
	dict["a"]="apple";
	dict["b"]="banana";
	dict["A"]="banana";
	dict["B"]="banana";
	dict["8"]="banana";
	dict["a"]="apple";
	dict["Name"]="John";
	dict["Age"]="36";
	dict["City"]="Houston";
	dict["STATE"]="NC";
	dict["ZIP"]="12345";
	if(check_dict_case(dict))
		printf("true\n");
	else
		printf("false\n");
	return 0;
}
