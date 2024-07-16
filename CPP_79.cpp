#include <string>
using namespace std;

string decimal_to_binary(int decimal);

string decimal_to_binary(int decimal){
    string binary = "db";
    if(decimal == 0){
        binary += "0";
    } else {
        while(decimal > 0){
            binary = ((decimal % 2 == 0) ? "0" : "1") + binary;
            decimal /= 2;
        }
    }
    return binary + "db";
}

int main(){
    int decimal;
    cin >> decimal;
    cout << decimal_to_binary(decimal) << endl;
    return 0;
}