#include <iostream>
#include<string>
#include<algorithm>
#include<stdexcept>

using namespace std;

any compare_one(any a, any b) {
    if (any_cast<double>(a) > stod(any_cast<string>(b)))
        return a;
    else
        return b;

    if (stod(any_cast<string>(a)) > any_cast<double>(b))
        return a;
    else
        return b;

    string da = any_cast<string>(a);
    string db = any_cast<string>(b);

    if (da > db)
        return a;
    else if (db > da)
        return b;
    throw invalid_argument("Tie");
}

int main() {
    cout << any_cast<double>(compare_one(1, 2.5)) << endl;
    cout << any_cast<double>(compare_one(1, "2,3")) << endl;
    cout << any_cast<string>(compare_one("5,1", "6")) << endl;
    cout << any_cast<double>(compare_one("1", 1)) << endl;
    return 0;
}