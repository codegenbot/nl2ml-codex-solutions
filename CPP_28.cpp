Here's the solution:

string concatenate(vector<string> strings){
    string result = "";
    for (const auto& s : strings) {
        result += s;
    }
    return result;