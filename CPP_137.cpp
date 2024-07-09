#include <boost/any.hpp>
#include <string>

using namespace boost;
using namespace std;

boost::any compare_one(const boost::any& a, const boost::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return b;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return a;
        } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
            return b;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (a.type() == typeid(string) && b.type() == typeid(string)) {
            if (boost::any_cast<string>(a) > boost::any_cast<string>(b)) {
                return a;
            } else if (boost::any_cast<string>(a) < boost::any_cast<string>(b)) {
                return b;
            }
        }
    }
    return std::string("None");
}