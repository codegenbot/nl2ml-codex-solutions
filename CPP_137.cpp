if(a.index() == b.index()){
    if(a.type() == typeid(int)){
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b)) return a;
        else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)) return b;
        else return "None";
    }
    else if(a.type() == typeid(float)){
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b)) return a;
        else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)) return b;
        else return "None";
    }
    else if(a.type() == typeid(string)){
        if(stof(boost::any_cast<string>(a)) > stof(boost::any_cast<string>(b))) return a;
        else if(stof(boost::any_cast<string>(a)) < stof(boost::any_cast<string>(b))) return b;
        else return "None";
    }
}