#include <iostream>

using namespace std;

int main() {

  unsigned long long sum, x;
  int n;
  sum = 0;

  cin >> n;
  
  while(n--) {
    cin >> x;
    sum += x;
  }

  cout << sum;
  
  return 0;
}
