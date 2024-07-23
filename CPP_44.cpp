#include<string>
using namespace std;

string change_base(int x,int base){
    string res = "";
    while(x > 0){
        int rem = x % base;
        if(rem < 10)
            res.insert(0, to_string(rem));
        else{
            switch(rem){
                case 10:
                    res.insert(0, "A");
                    break;
                case 11:
                    res.insert(0, "B");
                    break;
                case 12:
                    res.insert(0, "C");
                    break;
                case 13:
                    res.insert(0, "D");
                    break;
                case 14:
                    res.insert(0, "E");
                    break;
                case 15:
                    res.insert(0, "F");
                    break;
            }
        }
        x /= base;
    }
    return res;
}