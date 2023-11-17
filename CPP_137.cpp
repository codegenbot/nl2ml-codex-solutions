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
    if(a.type()==typeid(int)){
        if(b.type()==typeid(int)){
            int x=boost::any_cast<int>(a);
            int y=boost::any_cast<int>(b);
            if(x==y)
                return "None";
            else
                return max(x,y);
        }
        else if(b.type()==typeid(float)){
            int x=boost::any_cast<int>(a);
            float y=boost::any_cast<float>(b);
            if(x==y)
                return "None";
            else
                return max(x,y);
        }
        else if(b.type()==typeid(string)){
            int x=boost::any_cast<int>(a);
            string y=boost::any_cast<string>(b);
            if(x==stof(y))
                return "None";
            else
                return max(x,stof(y));
        }
    }
    else if(a.type()==typeid(float)){
        if(b.type()==typeid(int)){
            float x=boost::any_cast<float>(a);
            int y=boost::any_cast<int>(b);
            if(x==y)
                return "None";
            else
                return max(x,y);
        }
        else if(b.type()==typeid(float)){
            float x=boost::any_cast<float>(a);
            float y=boost::any_cast<float>(b);
            if(x==y)
                return "None";
            else
                return max(x,y);
        }
        else if(b.type()==typeid(string)){
            float x=boost::any_cast<float>(a);
            string y=boost::any_cast<string>(b);
            if(x==stof(y))
                return "None";
            else
                return max(x,stof(y));
        }
    }
    else if(a.type()==typeid(string)){
        if(b.type()==typeid(int)){
            string x=boost::any_cast<string>(a);
            int y=boost::any_cast<int>(b);
            if(stof(x)==y)
                return "None";
            else
                return max(stof(x),y);
        }
        else if(b.type()==typeid(float)){
            string x=boost::any_cast<string>(a);
            float y=boost::any_cast<float>(b);
            if(stof(x)==y)
                return "None";
            else
                return max(stof(x),y);
        }
        else if(b.type()==typeid(string)){
            string x=boost::any_cast<string>(a);
            string y=boost::any_cast<string>(b);
            if(stof(x)==stof(y))
                return "None";
            else
                return max(stof(x),stof(y));
        }
    }
}
int main(){
    boost::any a=1;
    boost::any b="2,3";
    cout<<compare_one(a,b)<<endl;
    return 0;
}
