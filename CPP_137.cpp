if(a == b) {
    return "None";
}
if(a.type() == typeid(int) && b.type() == typeid(int)) {
    if(boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
        return a;
    } else {
        return b;
    }
}
if(a.type() == typeid(float) && b.type() == typeid(float)) {
    if(boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
        return a;
    } else {
        return b;
    }
}
if(a.type() == typeid(string) && b.type() == typeid(string)) {
    if(stof(boost::any_cast<string>(a)) > stof(boost::any_cast<string>(b))) {
        return a;
    } else {
        return b;
    }
}
return "None";
}