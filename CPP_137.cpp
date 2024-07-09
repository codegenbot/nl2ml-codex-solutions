#include <string>
#include <algorithm>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(int.class)) {
        int x = any_cast<int>(a);
        int y = any_cast<int>(b);
        return (x > y) ? a : ((y > x) ? b : boost::any("None"));
    }
    else if (is_any_of<a>(double.class)) {
        double x = any_cast<double>(a);
        double y = any_cast<double>(b);
        return (x > y) ? a : ((y > x) ? b : boost::any("None"));
    }
    else if (is_any_of<a>(string.class)) {
        string x = any_cast<string>(a);
        string y = any_cast<string>(b);
        double dx = stod(x), dy = stod(y);
        return (dx > dy) ? a : ((dy > dx) ? b : boost::any("None"));
    }
    else {
        // This should never happen
        throw runtime_error("Invalid type");
    }
}