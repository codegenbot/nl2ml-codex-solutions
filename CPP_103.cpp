#include <string>
#include <cmath>

std::string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++){
        sum += i;
    }
    double avg = (double)sum / (m - n + 1);
    avg = floor(avg);
    std::string res = "";
    while(avg){
        if(avg & 1) res.push_back('1');
        else res.push_back('0');
        avg >>= 1;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    int n, m;
    std::cout << "Enter the start and end values: ";
    std::cin >> n >> m;
    std::cout << "Rounded average is: " << rounded_avg(n,m) << std::endl;
    return 0;
}