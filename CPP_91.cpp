#include <string>
using namespace std;

int is_bored(std::string S){
    int boredom_count = 0;
    bool is_i_present = false;
    
    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == 'I' && (i == 0 || S[i - 1] == '.' || S[i - 1] == '?' || S[i - 1] == '!')) {
            is_i_present = true;
        } else if ((S[i] == '.' || S[i] == '?' || S[i] == '!') && is_i_present) {
            boredom_count++;
            is_i_present = false;
        }
    }
    
    return boredom_count;
}