boost::any compare_one(boost::any a, boost::any b){
    if (a.type() == typeid(int) && b.type() == typeid(int)){
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        if (num1 > num2){
            return num1;
        } else if (num1 < num2){
            return num2;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)){
        float num1 = boost::any_cast<float>(a);
        float num2 = boost::any_cast<float>(b);
        if (num1 > num2){
            return num1;
        } else if (num1 < num2){
            return num2;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)){
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if (str1 > str2){
            return str1;
        } else if (str1 < str2){
            return str2;
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(string)){
        int num1 = boost::any_cast<int>(a);
        string str2 = boost::any_cast<string>(b);
        return str2;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)){
        string str1 = boost::any_cast<string>(a);
        int num2 = boost::any_cast<int>(b);
        return str1;
    }
    return "None";
}