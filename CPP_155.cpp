/*
Given an integer. return a vector that has the number of even and odd digits respectively.

 Example:
    even_odd_count(-12) ==> {1, 1}
    even_odd_count(123) ==> {1, 2}
*/

using namespace std;
vector<int> even_odd_count(int num){
    vector<int> even_odd;
    int even = 0, odd = 0;
    if(num < 0){
        num *= -1;
    }
    while(num > 0){
        if((num % 10) % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
        num /= 10;
    }
    even_odd.push_back(even);
    even_odd.push_back(odd);
    return even_odd;
}
int main(){
    vector<int> test = even_odd_count(123);
    for(int i = 0; i < test.size(); i++){
        cout << test[i] << endl;
    }
}
