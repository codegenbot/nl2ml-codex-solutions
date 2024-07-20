boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > boost::any_cast<int>(a) ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b) > boost::any_cast<int>(a) ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a) > boost::any_cast<int>(b) ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any_cast<double>(a) > boost::any_cast<int>(b) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float b_float = boost::any_cast<float>(b);
        return b_float > stof(boost::any_cast<string>(a).c_str()) ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double b_double = boost::any_cast<double>(b);
        return b_double > stod(boost::any_cast<string>(a).c_str()) ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int b_int = boost::any_cast<int>(b);
        return stof(boost::any_cast<string>(a).c_str()) > b_int ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string a_str = boost::any_cast<string>(a);
        string b_str = boost::any_cast<string>(b);
        return a_str.compare(b_str) > 0 ? a : b;
    }
    else {
        return "None";
    }
}