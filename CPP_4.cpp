float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    for(float num : numbers){
        sum += num;
    }
    float mean = sum / numbers.size();

    float deviation_sum = 0;
    for(float num : numbers){
        deviation_sum += abs(num - mean);
    }
    float mad = deviation_sum / numbers.size();

    return mad;
}