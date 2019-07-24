#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  int count[10] = {0};

  string s;
  cin >> s;

  for(int i = 0; i < s.length(); i++)
    count[ s[i] - '0' ]++;
  

  for(int i = 0; i < 10; i++)
    cout << i << " " << count[i] << endl;
  
}
    
