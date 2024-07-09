int do_algebra(vector<string> operato, vector<int> operand){
    int result = 0;
    int temp = operand[0];
    
    for(int i = 0; i < operato.size(); i++){
        if(operato[i] == "+"){
            result += temp;
            temp = operand[i+1];
        }
        else if(operato[i] == "-"){
            result -= temp;
            temp = operand[i+1];
        }
        else if(operato[i] == "*"){
            result *= temp;
            temp = operand[i+1];
        }
        else if(operato[i] == "//" || operato[i] == "**"){
            int t = temp;
            temp = operand[i+1];
            if(operato[i] == "//")
                result /= t;
            else
                result = pow(result, t);
        }
    }
    
    return result;
}