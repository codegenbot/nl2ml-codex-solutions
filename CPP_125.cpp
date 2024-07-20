vector<string> split_words(string txt){
		vector<string> result;
		string word = "";
		for(char c : txt){
			if(c == ' ' || c == ','){
				result.push_back(word);
				word = "";
			} else {
				word += c;
			}
		}
		if(word != ""){
			result.push_back(word);
		}
		if(result.size() == 1 && result[0].find_first_not_of("abcdefghijklmnopqrstuvwxyz") == string::npos){
			string count = to_string(count_if(result[0].begin(), result[0].end(), [](char c){ return islower(c) && (c - 'a') % 2 == 1; }));
			result = {count};
		}
		return result;
	}