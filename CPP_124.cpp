#include<string>
using namespace std;

bool valid_date(string date){
    if(date.empty()) return false;
    
    int days, month, year;
    if(sscanf(date.c_str(), "%d-%d-%d", &month, &days, &year) != 3) return false;

    if(month < 1 || month > 12) return false;

    if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (days < 1 || days > 31)) return false;
    if((month == 4 || month == 6 || month == 9 || month == 11) && (days < 1 || days > 30)) return false;
    if(month == 2 && (days < 1 || days > 29)) return false;

    return true;
}