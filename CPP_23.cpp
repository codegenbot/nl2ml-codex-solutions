int my_strlen(const std::string& str){
    return str.length();
}

int main() {
    assert (my_strlen("asdasnakj") == 12); 
    return 0;
}