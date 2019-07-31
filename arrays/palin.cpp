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

/*

use length of string to find odd or even instead of i - j == 2

int len = str.length();

// use and operator to check even or odd; len & 1 compares the last bit
if (len & 1)
   cout << "odd"
else
   cout << "even"

*/
