#include <cmath>
using namespace std;

bool iscuber(int a){
    int i = 1;
    while (pow(i,3) <= a) {
        if (pow(i,3) == a) return true;
        i++;
    }
    return false;

}

int main() {
    // your code here
    assert (iscuber(1729) == false);
    return 0;
}