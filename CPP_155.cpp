vector<int> even_odd_count(int num){
	    int even_count = 0, odd_count = 0;
	    string num_str = to_string(abs(num));
	    for(char c : num_str){
	        if(c - '0' % 2 == 0){
	            even_count++;
	        } else {
	            odd_count++;
	        }
	    }
	    return {even_count, odd_count};
	}