#include <vector>
using namespace std;

bool isPrime(int n);

int skjkasdkd(vector<int> lst){
    int sum = 0;
    vector<int>::iterator it;
    for(it=lst.begin();it!=lst.end();++it)
    {
        if(!isPrime(*it)) continue; // Skip non-prime numbers
        int n = *it;
        while(n > 0) 
        {
            sum += n % 10;
            n /= 10;
        }
    }
    return sum;
}