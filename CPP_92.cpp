Here is the completed code:

bool any_int(float a, float b, float c) {
    int ai = (int)a, bi = (int)b, ci = (int)c;
    return ai == bi + ci || bi == ai + ci || ci == ai + bi;
}