bool will_it_fly(vector<int> q,int w){
    string str = "";
    for(int i : q) {
        str += to_string(i);
    }
    return (str == to_string(reverse(str)) && accumulate(q.begin(),q.end(),0) <= w);
}