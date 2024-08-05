#include <string>
#include <cassert>

int is_bored(std::string S) {
    int count = 0;
    bool is_boredom = false;
    for (int i = 0; i < S.length(); ++i) {
        if (S[i] == 'I' && (i == 0 || S[i - 1] == '.' || S[i - 1] == '?' || S[i - 1] == '!')) {
            is_boredom = true;
        } else if ((S[i] == '.' || S[i] == '?' || S[i] == '!') && is_boredom) {
            count++;
            is_boredom = false;
        }
    }
    return count;
}