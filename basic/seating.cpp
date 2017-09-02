#include <iostream>

int main() {
  int arr[109];
  int x = 1;
  for(int i = 1; i <= 108; ) {
    if(x == 1) {
      arr[i++] = 1;
      arr[i++] = 2;
      arr[i++] = 3;
      x = 0;
    } else {
      arr[i++] = 3;
      arr[i++] = 2;
      arr[i++] = 1;
      x = 1;
    }
  } 

  int t;
  std::cin >> t;
  while(t--) {
    std::cin >> x;
    if(arr[x] == 1)
      std::cout << "WS" << std::endl;
    else if(arr[x] == 2)
      std::cout << "MS" << std::endl;
    else
      std::cout << "AS" << std::endl;
  }

  
  
  return 0;
}


