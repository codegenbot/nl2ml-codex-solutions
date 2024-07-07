#include <string>
#include <cmath>

std::string rounded_avg(int n, int m) {
    if(n > m) return "-1";
    int sum = 0;
    for(int i = n; i <= m; i++){
        sum += i;
    }
    double avg = (double)sum / (m - n + 1);
    avg = floor(avg);
    std::string binary = "";
    while(avg > 0){
        if(avg & 1) binary.push_back('1');
        else binary.push_back('0');
        avg >>= 1;
    }
    reverse(binary.begin(), binary.end());
    return binary;