if(dict.empty()) return false;
bool all_lower = true, all_upper = true;
for(auto const& entry : dict){
    if(entry.first != tolower(entry.first[0])) all_lower = false;
    if(entry.first != toupper(entry.first[0])) all_upper = false;
}
return all_lower || all_upper;