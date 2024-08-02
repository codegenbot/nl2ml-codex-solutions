#include <boost/any.hpp>
#include <cassert>
#include <string>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b))
            return a;
        else if(boost::any_cast<int>(a) < boost::any_cast<int>(b))
            return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b))
            return a;
        else if(boost::any_cast<float>(a) < boost::any_cast<float>(b))
            return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if(stof(boost::any_cast<string>(a)) > stof(boost::any_cast<string>(b)))
            return a;
        else if (stof(boost::any_cast<string>(a)) < stof(boost::any_cast<string>(b)))
            return b;
    }
    else if ((a.type() == typeid(int) && b.type() == typeid(string)) || 
             (a.type() == typeid(string) && b.type() == typeid(int))) {
        if (stof(a.type() == typeid(int) ? to_string(boost::any_cast<int>(a)) : boost::any_cast<string>(a)) >
            stof(b.type() == typeid(int) ? to_string(boost::any_cast<int>(b)) : boost::any_cast<string>(b)))
            return a;
        else if (stof(a.type() == typeid(int) ? to_string(boost::any_cast<int>(a)) : boost::any_cast<string>(a)) <
                 stof(b.type() == typeid(int) ? to_string(boost::any_cast<int>(b)) : boost::any_cast<string>(b)))
            return b;
    }
    return boost::any(); // or appropriate handling based on the use case, instead of "None"
}