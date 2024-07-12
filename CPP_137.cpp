#include <boost/any.hpp>
#include <cassert>
#include <string>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b)){
            return a;
        } else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)){
            return b;
        } else {
            return string("None");
        }
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b)){
            return a;
        } else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)){
            return b;
        } else {
            return string("None");
        }
    } else if(a.type() == typeid(string) && b.type() == typeid(string)){
        if(stof(boost::any_cast<string>(a)) > stof(boost::any_cast<string>(b))){
            return a;
        } else if(stof(boost::any_cast<string>(a)) < stof(boost::any_cast<string>(b))){
            return b;
        } else {
            return string("None");
        }
    } else {
        return string("None");
    }
}

int main() {
    assert (boost::any_cast<string>(compare_one(string("1"), string("1"))) == "None");
    return 0;
}