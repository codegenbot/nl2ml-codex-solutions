if(typeid(a) == typeid(int) && typeid(b) == typeid(int)){
    if(boost::any_cast<int>(a) > boost::any_cast<int>(b)) return a;
    if(boost::any_cast<int>(a) < boost::any_cast<int>(b)) return b;
}
if(typeid(a) == typeid(float) && typeid(b) == typeid(float)){
    if(boost::any_cast<float>(a) > boost::any_cast<float>(b)) return a;
    if(boost::any_cast<float>(a) < boost::any_cast<float>(b)) return b;
}
if(typeid(a) == typeid(string) && typeid(b) == typeid(string)){
    if(stof(boost::any_cast<string>(a)) > stof(boost::any_cast<string>(b))) return a;
    if(stof(boost::any_cast<string>(a)) < stof(boost::any_cast<string>(b))) return b;
}
return "None";
}