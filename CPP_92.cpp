Here is the completed code:

bool any_int(float a, float b, float c) {
    int ai = a;
    int bi = b;
    int ci = c;
    return (ai == bi + ci || ai == bi - ci || ai == ci + bi || ai == ci - bi);
}