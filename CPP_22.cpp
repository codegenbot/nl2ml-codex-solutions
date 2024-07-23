#include <vector>
#include <list>
#include <boost/any.hpp>

typedef std::list<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if(boost::any_cast<int>(value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}