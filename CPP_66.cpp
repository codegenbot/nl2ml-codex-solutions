#include<string>
using namespace std;

int digitSum(string s){
    int sum = 0;
    for(char c : s){
        if(isupper(c))
            sum += (int)c;
    }
    return sum;
}