int sum_squares(vector<float> lst){
		int sum = 0;
		for(auto num : lst){
			sum += ceil(num) * ceil(num);
		}
		return sum;
	}