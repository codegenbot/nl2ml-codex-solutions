double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow -= totalSnow * proportionMeltingPerHour; // subtract melting
        totalSnow += rateOfSnowfall; // add new snowfall
    }
    
    return totalSnow;
}