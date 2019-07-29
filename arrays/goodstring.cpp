#include <iostream>

using namespace std;

int main() {

  string s;
  int max = 0;

  cin >> s;

  int cnt = 0;
  
  for(int i = 0; i < s.length(); i++) {
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
      cnt++;
    else {
      
      if (cnt > max)
	max = cnt;
      
      cnt = 0;
    }    
  }

  if(cnt > max)
    max = cnt;

  cout << max;
  
  return 0;
}
