#include <iostream>
#include <vector>

using namespace std;

string selection(vector<string> strs, int nth) {
  for(int i = 0; i < nth; i++) {
    int smallest = i;

    for(int j = i + 1; j < strs.size(); j++) {
      if(strs[j].compare(strs[smallest]) < 0)
	smallest = j;
    }

    string temp = strs[i];
    strs.at(i) = strs.at(smallest);
    strs.at(smallest) = temp;

    // cout << i << " : ";
    // for(int i = 0; i < strs.size(); i++)
    // cout << strs[i] << ",";

    // cout << endl; 
  }

  return strs[nth - 1];
}

int main() {
  string s;
  int k;

  cin >> s >> k;
  
  vector<string> strs;
  for(unsigned int i = 0; i < s.length(); i++)
    strs.push_back(s.substr(i));

  //  for(int i = 0; i < strs.size(); i++)
  //cout << strs[i] << endl;
  
  string str = selection(strs, k);
  cout << str << endl;
  
  return 0;
}
