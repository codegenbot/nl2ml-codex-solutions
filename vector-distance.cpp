double distance = 0;
for(int i = 0; i < v1.size(); i++) {
    distance += pow(v1[i] - v2[i], 2);
}
return sqrt(distance);