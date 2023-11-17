/*
Create a function that takes integers, floats, or strings representing
real numbers, and returns the larger variable in its given variable type.
Return "None" if the values are equal.
Note: If a real number is represented as a string, the floating point might be . or ,

compare_one(1, 2.5) ➞ 2.5
compare_one(1, "2,3") ➞ "2,3"
compare_one("5,1", "6") ➞ "6"
compare_one("1", 1) ➞ "None"
*/
#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a,boost::any b){
	if(a.type()==typeid(int)&&b.type()==typeid(int)){
		if(boost::any_cast<int>(a)>boost::any_cast<int>(b))
			return a;
		else if(boost::any_cast<int>(a)<boost::any_cast<int>(b))
			return b;
		else
			return "None";
	}
	else if(a.type()==typeid(float)&&b.type()==typeid(float)){
		if(boost::any_cast<float>(a)>boost::any_cast<float>(b))
			return a;
		else if(boost::any_cast<float>(a)<boost::any_cast<float>(b))
			return b;
		else
			return "None";
	}
	else if(a.type()==typeid(string)&&b.type()==typeid(string)){
		if(boost::any_cast<string>(a)>boost::any_cast<string>(b))
			return a;
		else if(boost::any_cast<string>(a)<boost::any_cast<string>(b))
			return b;
		else
			return "None";
	}
	else if(a.type()==typeid(float)&&b.type()==typeid(int)){
		if(boost::any_cast<float>(a)>boost::any_cast<int>(b))
			return a;
		else if(boost::any_cast<float>(a)<boost::any_cast<int>(b))
			return b;
		else
			return "None";
	}
	else if(a.type()==typeid(int)&&b.type()==typeid(float)){
		if(boost::any_cast<int>(a)>boost::any_cast<float>(b))
			return a;
		else if(boost::any_cast<int>(a)<boost::any_cast<float>(b))
			return b;
		else
			return "None";
	}
	else if(a.type()==typeid(string)&&b.type()==typeid(int)){
		if(boost::any_cast<string>(a)>boost::any_cast<int>(b))
			return a;
		else if(boost::any_cast<string>(a)<boost::any_cast<int>(b))
			return b;
		else
			return "None";
	}
	else if(a.type()==typeid(int)&&b.type()==typeid(string)){
		if(boost::any_cast<int>(a)>boost::any_cast<string>(b))
			return a;
		else if(boost::any_cast<int>(a)<boost::any_cast<string>(b))
			return b;
		else
			return "None";
	}
	else if(a.type()==typeid(string)&&b.type()==typeid(float)){
		if(boost::any_cast<string>(a)>boost::any_cast<float>(b))
			return a;
		else if(boost::any_cast<string>(a)<boost::any_cast<float>(b))
			return b;
		else
			return "None";
	}
	else if(a.type()==typeid(float)&&b.type()==typeid(string)){
		if(boost::any_cast<float>(a)>boost::any_cast<string>(b))
			return a;
		else if(boost::any_cast<float>(a)<boost::any_cast<string>(b))
			return b;
		else
			return "None";
	}
}
int main(){
	int a,b;
	float c,d;
	string e,f;
	cin>>a>>b>>c>>d>>e>>f;
	boost::any p,q;
	p=compare_one(a,b);
	q=compare_one(c,d);
	boost::any r,s;
	r=compare_one(e,f);
	s=compare_one(p,q);
	boost::any t;
	t=compare_one(r,s);
	if(t.type()==typeid(int))
		cout<<boost::any_cast<int>(t)<<endl;
	else if(t.type()==typeid(float))
		cout<<boost::any_cast<float>(t)<<endl;
	else if(t.type()==typeid(string))
		cout<<boost::any_cast<string>(t)<<endl;
	return 0;
}
