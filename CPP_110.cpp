#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    bool isEven = false;
    
    for(int i=0; i<lst1.size(); i++){
        if(lst1[i]%2 != 0){
            for(int j=0; j<lst2.size(); j++){
                if(lst2[j]%2 == 0){
                    int temp = lst1[i];
                    lst1[i] = lst2[j];
                    lst2[j] = temp;
                    isEven = true;
                    break;
                }
            }
            if(!isEven) return "NO";
        }
    }
    
    for(int i=0; i<lst1.size(); i++){
        if(lst1[i]%2 != 0) return "NO";
    }
    
    return "YES";
}