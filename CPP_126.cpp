bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] > lst[i]){
            return false;
        }
    }
    return true;

int main(){
    assert(is_sorted({1, 2, 3, 4}) == true);
}