string decimal_to_binary(int decimal){
    string binary = "db";
    if(decimal == 0){
        binary += "0";
    }
    else{
        while(decimal > 0){
            binary += to_string(decimal % 2);
            decimal /= 2;
        }
    }
    reverse(binary.begin(), binary.end());
    binary += "db";
    return binary;
}