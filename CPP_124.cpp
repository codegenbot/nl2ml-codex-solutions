bool valid_date(const char* date) {
    if(date[0] == '\0') return false;
    
    int month, day, year;
    if(sscanf(date, "%d-%d-%d", &month, &day, &year) != 3) return false;
    
    if(month < 1 || month > 12) return false;
    
    if(month == 2 && (day < 1 || day > 29)) return false;
    if((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30)) return false;
    if(day < 1 || day > 31) return false;
    
    return true;
}