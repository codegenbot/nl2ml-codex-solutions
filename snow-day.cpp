```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int hours;
    cout << "Enter the number of hours: ";
    cin >> hours;
    
    float initialSnow;
    cout << "Enter the initial snow on the ground (in feet): ";
    cin >> initialSnow;
    
    float rateOfSnowFall;
    cout << "Enter the rate of snow fall per hour (in feet/hour): ";
    cin >> rateOfSnowFall;
    
    float proportionOfSnowMeltingPerHour;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> proportionOfSnowMeltingPerHour;

    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        totalSnow -= initialSnow * proportionOfSnowMeltingPerHour;
    }
    
    std::streamsize precision = 6;
    std::ios_base::fmtflags flags = cout.flags();
    cout << std::fixed << std::setprecision(precision);
    cout << "The amount of snow on the ground after " << hours << " hours is: " << totalSnow << " ft" << endl;
    cout.flags(flags); // Reset the precision
    return 0;
}