string binary = "db";
    while(decimal > 0){
        binary = to_string(decimal % 2) + binary;
        decimal = decimal / 2;
    }
    return binary + "db";
}