Here is the completed code:

bool will_it_fly(vector<int> q,int w){
    string str = "";
    for(int i = 0; i < q.size(); i++){
        str += to_string(q[i]);
    }
    if(str != reverse(str).toString()){
        return false;
    } else {
        int sum = 0;
        for(int i = 0; i < q.size(); i++){
            sum += q[i];
        }
        if(sum <= w){
            return true;
        } else {
            return false;
        }
    }
}