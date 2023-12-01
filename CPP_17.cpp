#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<int> parse_music(string music_string){
    vector<int> beats;
    string note = "";
    for(char c : music_string){
        if(c == ' '){
            if(note == "o"){
                beats.push_back(4);
            }
            else if(note == "o|"){
                beats.push_back(2);
            }
            else if(note == ".|"){
                beats.push_back(1);
            }
            note = "";
        }
        else{
            note += c;
        }
    }
    if(note == "o"){
        beats.push_back(4);
    }
    else if(note == "o|"){
        beats.push_back(2);
    }
    else if(note == ".|"){
        beats.push_back(1);
    }
    return beats;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main() {
    assert (issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    cout << "Test Passed!" << endl;
    return 0;
}