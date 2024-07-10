#include <boost/variant2/variant.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    using namespace boost;

    if (holds_alternative<int>(a) && holds_alternative<double>(b)) {
        return get<int>(a) > get<double>(b) ? a : b;
    }
    else if (holds_alternative<double>(a) && holds_alternative<int>(b)) {
        return get<double>(a) > get<int>(b) ? a : b;
    }
    else if (holds_alternative<std::string>(a) && holds_alternative<double>(b)) {
        std::string str = get<std::string>(a);
        double num = get<double>(b);
        return str > std::to_string(num) ? a : b;
    }
    else if (holds_alternative<double>(a) && holds_alternative<std::string>(b)) {
        std::string str = get<std::string>(b);
        double num = get<double>(a);
        return std::to_string(num) > str ? a : b;
    }
    else if (holds_alternative<std::string>(a) && holds_alternative<std::string>(b)) {
        std::string str1 = get<std::string>(a);
        std::string str2 = get<std::string>(b);
        return str1 > str2 ? a : b;
    }
    else if (holds_alternation