#include <iostream>

using namespace std;

int main() {
  int N;

  cin >> N;
  
  while(N--) {
    string str;

    cin >> str;

    int i = 0, j = str.length() - 1;
    
    for(; i <= j && str[i] == str[j]; i++, j--);

    if(i < j)
      cout << "NO" << endl;
    else {
      if ((i - j) == 2)
	cout << "YES" << " ODD" << endl;
      else
	cout << "YES" << " EVEN" << endl;
    }

  }

  
  return 0;
}
