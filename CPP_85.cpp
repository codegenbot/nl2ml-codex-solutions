/*
Given a non-empty vector of integers lst. add the even elements that are at odd indices..


Examples:
    add({4, 2, 6, 7}) ==> 2 
*/
#include<stdio.h>
#include<vector>
    int sum=0;
    for(int i=1;i<lst.size();i+=2)
    {
        if(lst[i]%2==0)
        {
            sum+=lst[i];
        }
    }
    return sum;
}
int main()
{
    int n,x;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<add(v);
}
using namespace std;
int add(vector<int> lst){
