int closest_integer(string value){
    double num = stod(value);
    int closestInt = round(num);
    if (num - closestInt == 0.5 || num - closestInt == -0.5) {
        closestInt = floor(num);
    }
    return closestInt;
}