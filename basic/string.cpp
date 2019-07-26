#include <iostream>

using namespace std;


void sortsub(string str, int from, int to) {
  for(int i = from; i <= to; i++) {
    for(int j = i + 1; j <= to; j++) {
      if(str[i] < str[j]) {
	char t = str[i];
	str[i] = str[j];
	str[j] = t;
      }
    }
  }
  cout << str;
}


int main() {

  int N;

  cin >> N;
  
  while(N--) {
    int from, to;
    string str;
    cin >> str >> from >> to;
    sortsub(str, from, to);
    cout << endl;
  }
  
  
  return 0;
}
