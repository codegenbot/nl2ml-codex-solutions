using namespace std;

int hex_key(const string& num) {
    int count = 0;
    for (char c : num) {
        if ((c >= '2' && c <= '7') || (c >= 'B' && c <= 'F')) {
            count++;
        }
    }
    return count;