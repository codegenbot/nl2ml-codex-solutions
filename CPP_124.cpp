if(date.empty()) return false;
    
    int month, day, year;
    if(sscanf(date.c_str(), "%d-%d-%d", &month, &day, &year) != 3) return false;
    
    if(month < 1 || month > 12) return false;
    
    if(month == 2) {
        if(day < 1 || day > 29) return false;
    } else if(month == 4 || month == 6 || month == 9 || month == 11) {
        if(day < 1 || day > 30) return false;
    } else {
        if(day < 1 || day > 31) return false;
    }
    
    return true;
}