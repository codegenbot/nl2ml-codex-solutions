#include <any>
#include <cassert>
#include <string>

using namespace std;

any compare_one(any a, any b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(any_cast<int>(a) > any_cast<int>(b)){
            return a;
        } else if(any_cast<int>(a) < any_cast<int>(b)){
            return b;
        } else {
            return nullptr;
        }
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(any_cast<float>(a) > any_cast<float>(b)){
            return a;
        } else if(any_cast<float>(a) < any_cast<float>(b)){
            return b;
        } else {
            return nullptr;
        }
    } else if(a.type() == typeid(string) && b.type() == typeid(string)){
        if(any_cast<string>(a) > any_cast<string>(b)){
            return a;
        } else if(any_cast<string>(a) < any_cast<string>(b)){
            return b;
        } else {
            return nullptr;
        }
    } else {
        return nullptr;
    }
}