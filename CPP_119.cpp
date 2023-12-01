string match_parens(vector<string> lst) {
  int count = 0;
  
  for (int i = 0; i < lst.size(); i++) {
    for (int j = 0; j < lst[i].size(); j++) {
      if (lst[i][j] == '(') {
        count++;
      } else {
        count--;
      }
      
      if (count < 0) {
        return "No";
      }
    }
  }
  
  if (count == 0) {
    return "Yes";
  } else {
    return "No";
  }
}