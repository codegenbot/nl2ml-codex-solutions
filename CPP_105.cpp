#include <vector>
#include <map>
#include <algorithm>
#include <string>

bool issame(vector<string> a, vector<string> b);

bool issame(vector<string> a, vector<string> b){
  if (a.size() != b.size()) {
    return false;
  }

  for (int i = 0; i < a.size(); i++) {
    if (a[i] != b[i]) {
      return false;
    }
  }

  return true;
}

vector<string> by_length(vector<int> arr){
  vector<int> sortedArr;
  for(int i=0; i<arr.size(); i++){
    if(arr[i]>=1 && arr[i]<=9){
      sortedArr.push_back(arr[i]);
    }
  }
  sort(sortedArr.begin(), sortedArr.end());
  reverse(sortedArr.begin(), sortedArr.end());
  
  vector<string> result;
  map<int, string> digitMap;
  digitMap[1] = "One";
  digitMap[2] = "Two";
  digitMap[3] = "Three";
  digitMap[4] = "Four";
  digitMap[5] = "Five";
  digitMap[6] = "Six";
  digitMap[7] = "Seven";
  digitMap[8] = "Eight";
  digitMap[9] = "Nine";
  
  for(int i=0; i<sortedArr.size(); i++){
    result.push_back(digitMap[sortedArr[i]]);
  }
  
  return result;
}

int main() {
  assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));

  return 0;
}