```
return (digit_count <= 3 && found_dot && valid_prefix) ? "Yes" : 
       (!found_dot && !std::all_of(file_name.begin() + digit_count, file_name.end(), std::isalpha())) ? "No" : "Yes";