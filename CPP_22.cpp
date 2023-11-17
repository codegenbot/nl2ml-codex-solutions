/*
Filter given vector of any python values only for integers
>>> filter_integers({"a", 3.14, 5})
{5}
>>> filter_integers({1, 2, 3, "abc", {}, {}})
{1, 2, 3}
*/
#include<iostream>
#include<vector>
#include<string>
#include<any>
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;
vector<int> filter_integers(list_any values){
    vector<int> v;
    for(auto it = values.begin(); it != values.end(); ++it)
    {
        if(it->type() == typeid(int))
        {
            v.push_back(boost::any_cast<int>(*it));
        }
    }
    return v;
}
