#include<string>
#include<vector>
#include<boost/any.hpp>
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values){
    vector<int> result;
    for (auto& value : values) {
        if (boost::any_cast<int>(value, 0)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}