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
        if(boost::any_cast<int>(a)<boost::any_cast<int>(b))
            return b;
        else if(boost::any_cast<int>(a)>boost::any_cast<int>(b))
            return a;
        else
            return "None";
    }
    else if(a.type()==typeid(float)&&b.type()==typeid(float)){
        if(boost::any_cast<float>(a)<boost::any_cast<float>(b))
            return b;
        else if(boost::any_cast<float>(a)>boost::any_cast<float>(b))
            return a;
        else
            return "None";
    }
    else if(a.type()==typeid(string)&&b.type()==typeid(string)){
        if(boost::any_cast<string>(a)<boost::any_cast<string>(b))
            return b;
        else if(boost::any_cast<string>(a)>boost::any_cast<string>(b))
            return a;
        else
            return "None";
    }
    else{
        if(a.type()==typeid(int)&&b.type()==typeid(string)){
            float c=boost::any_cast<int>(a);
            float d=stof(boost::any_cast<string>(b));
            if(c<d)
                return b;
            else if(c>d)
                return a;
            else
                return "None";
        }
        else if(a.type()==typeid(string)&&b.type()==typeid(int)){
            float c=stof(boost::any_cast<string>(a));
            float d=boost::any_cast<int>(b);
            if(c<d)
                return b;
            else if(c>d)
                return a;
            else
                return "None";
        }
        else if(a.type()==typeid(int)&&b.type()==typeid(float)){
            float c=boost::any_cast<int>(a);
            float d=boost::any_cast<float>(b);
            if(c<d)
                return b;
            else if(c>d)
                return a;
            else
                return "None";
        }
        else if(a.type()==typeid(float)&&b.type()==typeid(int)){
            float c=boost::any_cast<float>(a);
            float d=boost::any_cast<int>(b);
            if(c<d)
                return b;
            else if(c>d)
                return a;
            else
                return "None";
        }
        else if(a.type()==typeid(float)&&b.type()==typeid(string)){
            float c=boost::any_cast<float>(a);
            float d=stof(boost::any_cast<string>(b));
            if(c<d)
                return b;
            else if(c>d)
                return a;
            else
                return "None";
        }
        else if(a.type()==typeid(string)&&b.type()==typeid(float)){
            float c=stof(boost::any_cast<string>(a));
            float d=boost::any_cast<float>(b);
            if(c<d)
                return b;
            else if(c>d)
                return a;
            else
                return "None";
        }
    }
}
int main(){
    boost::any a=1;
    boost::any b="2,3";
    boost::any c=compare_one(a,b);
    cout<<boost::any_cast<string>(c);
}
