#include <iostream>
#include <vector>

using namespace std;

int main() {

  int n;
  cin >> n;

  vector<string> strs;
  
  for(int i = 0; i < n; i++) {
    string str;
    cin >> str;
    strs.push_back(str);
  }
  
  for(int i = 0; i < n; i++) {
    int cnt = 0;
    for(int j = 0; j < i; j++) {
      if(strs[j].compare(strs[i]) < 0)
	cnt++;
    }

    cout << cnt << endl;
  }
    
  return 0;
}
