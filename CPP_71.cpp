float triangle_area(float a, float b, float c){
    if(a + b > c && b + c > a && a + c > b){
        float s = (a + b + c) / 2;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        return round(area * 100) / 100;
    }
    else{
        return -1;
    }
}