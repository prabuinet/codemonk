#include <iostream>

int main() {
  int t;
  std::cin >> t;
  while(t--) {
    unsigned long long a;
    int n;
    std::cin >> a >> n;
    int i = 1;

    int result = 0;
    unsigned long long resultNr = 0;
    
    for( ; i <= n; i++) {
      int x;
      std::cin >> x;

      if(result == 0) {

	if(x == 0 && a > 0)
	  a--;
	else
	  a += 2;

	
	if(i == n) {
	  result = 1;
	  resultNr = a;
	}
	else if(a == 0) {
	  if(i == n) {
	    result = 1;
	    resultNr = 0;
	  } else {
	    result = 2;
	    resultNr = i;
	  }
	}
      }
    }

    if(result == 1)
      std::cout << "Yes " << resultNr << std::endl;
    else
      std::cout << "No " << resultNr << std::endl;
  }

  
  return 0;
}
