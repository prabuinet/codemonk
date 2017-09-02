#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;


void anagram() {
  string s1;
  string s2;

  cin >> s1;
  cin >> s2;

  
  int arr[125];
  for(int i = 0; i < 125; i++)
    arr[i] = 0;

  for(int i = 0; i < s1.size(); i++) {
    arr[(int) s1[i]]++;
  }

  int to_delete = 0;

  for(int i = 0; i < s2.size(); i++) {
    int x = (int) s2[i];
    if(arr[x] > 0)
      arr[x]--;
    else
      to_delete++;
  }

  for(int i = 0; i < 125; i++) {
    to_delete += arr[i];
  }
  
  cout << to_delete << std::endl;
}

int main() {
  int t;
  cin >> t;

  while(t--)
    anagram();
  
  return 0;
}
