bool issame(vector<int> a, vector<int> b){
    vector<int> filter_integers(list<any> values){
        vector<int> result;
        for(auto& val : values){
            if(typeid(int) == val.type()){
                result.push_back(boost::any_cast<int>(val));
            }
        }
        return result;
    }
}

int main() {
    // Main function code here
    return 0;
}