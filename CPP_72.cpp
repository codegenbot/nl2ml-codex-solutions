bool will_it_fly(vector<int> q,int w){
    string s = "";
    for(int i:q) {
        s+=to_string(i);
    }
    reverse(s.begin(),s.end());
    if(s!=to_string(q[0])) return false;
    int sum=0;
    for(int i:q) sum+=i;
    return sum<=w;
}