vector<int> remove_duplicates(vector<int> numbers);
bool issame(vector<int> a, vector<int> b);

vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int i = 0; i < numbers.size(); i++){
        if(count(numbers.begin(), numbers.end(), numbers[i]) == 1){
            result.push_back(numbers[i]);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main(){
    // Assuming 'obj' is an instance of the class where `issame` is defined
    assert (obj.issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;
}