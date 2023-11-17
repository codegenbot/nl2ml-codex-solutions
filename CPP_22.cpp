/*
Filter given vector of any python values only for integers
>>> filter_integers({"a", 3.14, 5})
{5}
>>> filter_integers({1, 2, 3, "abc", {}, {}})
{1, 2, 3}
*/
#include<stdio.h>
#include<vector>
#include<string>
#include<boost/any.hpp> 
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;
vector<int> filter_integers(list_any values){
	vector<int> v;
	for(auto itr=values.begin();itr!=values.end();itr++){
		try{
			int val=boost::any_cast<int>(*itr);
			v.push_back(val);
		}
		catch(const boost::bad_any_cast& e){
			continue;
		}
	}
	return v;
}
int main(){
	list_any l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back("abc");
	l.push_back({});
	l.push_back({});
	vector<int> v=filter_integers(l);
	for(auto itr=v.begin();itr!=v.end();itr++){
		cout<<*itr<<" ";
	}
	cout<<endl;
}
