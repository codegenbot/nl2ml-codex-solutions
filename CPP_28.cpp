/*
Concatenate vector of strings into a single string
>>> concatenate({})
""
>>> concatenate({"a", "b", "c"})
"abc"
*/
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
string concatenate(vector<string> strings){
  string result;
  for(string s:strings){
    result+=s;
  }
  return result;
}
