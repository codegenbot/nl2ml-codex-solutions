Here is the completed code:

bool any_int(float a, float b, float c) {
    int ai = (int)a;
    int bi = (int)b;
    int ci = (int)c;

    if (ai == bi + ci || bi == ai + ci || ci == ai + bi)
        return true;
    else
        return false;
}